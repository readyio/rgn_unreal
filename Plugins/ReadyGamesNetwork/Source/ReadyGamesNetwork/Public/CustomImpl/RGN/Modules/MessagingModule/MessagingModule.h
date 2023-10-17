#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Messaging/MessagingModule.h"
#include <string>

using namespace std;

namespace RGN { namespace Modules { namespace Messaging {
	class MessagingModuleCustomImpl {
	public:
        static void Subscribe(
            string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver) {
                // TODO
            };
        static void Unsubscribe(
            string topic,
            RGN::Modules::Messaging::IMessageReceiver messageReceiver) {
                // TODO
            };
        static void SendMessageByUserId(
            string appId,
            string userId,
            string payload,
            string title,
            string text,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };
	};
}}}
