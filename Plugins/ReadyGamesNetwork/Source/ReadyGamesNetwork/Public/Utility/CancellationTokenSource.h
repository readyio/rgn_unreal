#pragma once

#include <memory>
#include "CancellationToken.h"

namespace RGN {
    class CancellationTokenSource
    {
    private:
        bool _isCancellationRequested;

    public:
        CancellationToken getToken() {
            return CancellationToken(&_isCancellationRequested);
        }

        void cancel() {
            _isCancellationRequested = true;
        }

        bool isCancellationRequested() const {
            return _isCancellationRequested;
        }
    };
}