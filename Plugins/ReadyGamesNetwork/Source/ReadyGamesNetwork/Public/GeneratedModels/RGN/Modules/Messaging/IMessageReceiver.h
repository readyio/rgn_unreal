#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include <string>
#include "Message.h"
using namespace std;

namespace RGN { namespace Modules { namespace Messaging {
    struct IMessageReceiver {
        virtual void OnMessageReceived(string topic, RGN::Modules::Messaging::Message message) = 0;
    };
}}}

