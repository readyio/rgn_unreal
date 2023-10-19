#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../CustomImpl/RGN/Modules/Messaging/MessagingModule.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "IMessageReceiver.h"
using namespace std;

namespace RGN { namespace Modules { namespace Messaging {
    class MessagingModule {
    public:
        static void Subscribe(
            string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver) {
                RGN::Modules::Messaging::MessagingModuleCustomImpl::Subscribe(
                    topic,
                    messageReceiver);
            };
        static void Unsubscribe(
            string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver) {
                RGN::Modules::Messaging::MessagingModuleCustomImpl::Unsubscribe(
                    topic,
                    messageReceiver);
            };
        static void SendMessageByUserId(
            string appId,
            string userId,
            string payload,
            string title,
            string text,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Messaging::MessagingModuleCustomImpl::SendMessageByUserId(
                    appId,
                    userId,
                    payload,
                    title,
                    text,
                    complete,
                    fail);
            };
    };
}}}