#include "Http/HttpListener.h"
#include "Http/HttpUtility.h"
#include "Sockets.h"
#include "Networking.h"

namespace RGN {
	std::function<void(std::string)> _callback;
	FSocket* _currListenSocket = nullptr;
	FSocket* _currConnectSocket = nullptr;

	bool HttpListener::isListening() {
		return !!_currListenSocket;
	}

	int32_t HttpListener::getPort() {
		if (!isListening()) {
			return 0;
		}
		return _currListenSocket->GetPortNo();
	}

	bool HttpListener::startListen(int32_t port, const std::function<void(std::string)>& callback, int32_t& boundedToPort) {
		if (isListening()) {
			boundedToPort = 0;
			return false;
		}
		_callback = callback;
		FIPv4Endpoint Endpoint(FIPv4Address::Any, port);
		_currListenSocket = FTcpSocketBuilder(TEXT("HttpUnrealListener"))
			.AsNonBlocking()
			.BoundToEndpoint(Endpoint)
			.Listening(2);
		boundedToPort = _currListenSocket->GetPortNo();
		return isListening();
	}

	bool HttpListener::stopListen() {
		if (!isListening()) {
			return false;
		}
		_currListenSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(_currListenSocket);
		_currListenSocket = nullptr;
		if (_currConnectSocket) {
			_currConnectSocket->Close();
			ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(_currConnectSocket);
			_currConnectSocket = nullptr;
		}
		return true;
	}

	void HttpListener::poll() {
		if (!isListening()) {
			return;
		}
		if (!_currConnectSocket) {
			bool hasPendingConnection = false;
			if (!_currListenSocket->HasPendingConnection(hasPendingConnection) || !hasPendingConnection) {
				return;
			}
			_currConnectSocket = _currListenSocket->Accept(TEXT("HttpUnrealListenerConnection"));
			if (!_currConnectSocket) {
				return;
			}
		}
		uint32 pendingDataSize;
		if (!_currConnectSocket->HasPendingData(pendingDataSize) || pendingDataSize == 0) {
			return;
		}
		TArray<uint8> TotalRecvData;
		uint32 totalRecvDataSize = 0;
		while (_currConnectSocket->HasPendingData(pendingDataSize) && pendingDataSize > 0) {
			uint8* recvData = new uint8[pendingDataSize];
			int32 bytesRead;
			if (_currConnectSocket->Recv(recvData, pendingDataSize, bytesRead) && bytesRead > 0) {
				uint32_t totalRecvDataStart = totalRecvDataSize;
				totalRecvDataSize += bytesRead;
				TotalRecvData.SetNum(totalRecvDataSize);
				for (uint32_t i = totalRecvDataStart; i < totalRecvDataSize; ++i) {
					TotalRecvData[i] = recvData[i - totalRecvDataStart];
				}
			}
			delete[] recvData;
		}
		FString OkResponse = "HTTP/1.1 200 OK\r\nContent-Length: 0\r\n\r\n";
		int32 OkResponseBytesSent = 0;
		_currConnectSocket->Send((uint8*)TCHAR_TO_UTF8(*OkResponse), OkResponse.Len(), OkResponseBytesSent);
		_currConnectSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(_currConnectSocket);
		_currConnectSocket = nullptr;
		FString RecvString;
		for (uint8 Byte : TotalRecvData) {
			RecvString.AppendChar((TCHAR)Byte);
		}
		FString Url = FString(HttpUtility::GetUrlFromRawHttp(std::string(TCHAR_TO_UTF8(*RecvString))).c_str());
		stopListen();
		if (_callback) {
			_callback(std::string(TCHAR_TO_UTF8(*Url)));
			_callback = nullptr;
		}
	}
}