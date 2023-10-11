#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <functional>
#include "IMessageReceiver.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Messaging {
    class MessagingModule {
    public:
        static void Subscribe(
            string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void Unsubscribe(
            string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void SendMessageByUserId(
            string appId,
            string userId,
            string payload,
            string title,
            string text,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = appId;
                requestData["userId"] = userId;
                requestData["payload"] = payload;
                requestData["title"] = title;
                requestData["text"] = text;
                RGNCore::CallAPI("messaging-sendMessageByUserId", requestData, complete, fail);
            };
    };
}}}