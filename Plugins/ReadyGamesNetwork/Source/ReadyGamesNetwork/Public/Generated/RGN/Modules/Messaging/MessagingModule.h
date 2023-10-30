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
            const string& topic,
            const RGN::Modules::Messaging::IMessageReceiver& messageReceiver) {
                RGN::Modules::Messaging::MessagingModuleCustomImpl::Subscribe(
                    topic,
                    messageReceiver);
            };
        static void Unsubscribe(
            const string& topic,
            const RGN::Modules::Messaging::IMessageReceiver& messageReceiver) {
                RGN::Modules::Messaging::MessagingModuleCustomImpl::Unsubscribe(
                    topic,
                    messageReceiver);
            };
        static void SendMessageByUserId(
            const string& appId,
            const string& userId,
            const string& payload,
            const string& title,
            const string& text,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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