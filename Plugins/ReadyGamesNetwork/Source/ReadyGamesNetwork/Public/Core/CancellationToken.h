#pragma once

#include <memory>

class CancellationToken
{
private:
    const bool* phandle;
public:
    CancellationToken() {
        this->phandle = nullptr;
    }

    CancellationToken(const bool* phandle) {
        this->phandle = phandle;
    }

    void SetHandlePtr(const bool* nphandle) {
        phandle = nphandle;
    }

    const bool* GetHandlePtr() {
        return phandle;
    }

    bool isCancellationRequested() const {
        if (phandle != nullptr) {
            return *phandle;
        }
        return false;
    }
};