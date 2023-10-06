#include "RGNGetUserWalletsRequestBody.h"

#ifdef READY_GAMES_SDK_UNREAL
#include "Json.h"
#elif READY_GAMES_SDK_GODOT

#endif

RGNGetUserWalletsRequestBody::RGNGetUserWalletsRequestBody(const std::string& appId)
	: RGNRequestBody(appId) {
}

RGNGetUserWalletsRequestBody::~RGNGetUserWalletsRequestBody() {
}

std::string RGNGetUserWalletsRequestBody::serialize() {
#ifdef READY_GAMES_SDK_UNREAL
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

    JsonObject->SetStringField("appId", FString(appId.c_str()));
    JsonObject->SetNumberField("version", version);

    FString JsonString;
    TSharedRef<TJsonWriter<> > JsonWriter = TJsonWriterFactory<>::Create(&JsonString);

    if (FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter)) {
        return TCHAR_TO_UTF8(*JsonString);
    }

    return "{}";
#elif READY_GAMES_SDK_GODOT

#endif
}