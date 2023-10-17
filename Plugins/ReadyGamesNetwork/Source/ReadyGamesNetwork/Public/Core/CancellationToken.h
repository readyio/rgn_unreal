#pragma once

class CancellationToken
{
public:
    bool isCancellationRequested() const
    {
        return false;
    }
};