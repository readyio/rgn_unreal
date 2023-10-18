#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Messaging/MessagingModule.h"
#include <string>

namespace RGN { namespace Modules { namespace Messaging {
	class MessagingModuleCustomImpl {
	public:
        static void Subscribe(
            std::string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver) {
                // Not implemented
            };
        static void Unsubscribe(
            std::string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver) {
                // Not implemented
            };
        static void SendMessageByUserId(
            std::string appId,
            std::string userId,
            std::string payload,
            std::string title,
            std::string text,
            const std::function<void(void)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["userId"] = userId;
                requestData["payload"] = payload;
                requestData["title"] = title;
                requestData["text"] = text;
                RGNCore::CallAPI<nlohmann::json>("messaging-sendMessageByUserId", requestData, complete, fail);
            };
	};
}}}