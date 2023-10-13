#pragma once

class CancellationToken
{
private:
    bool cancelled = false;
public:
    void cancel()
    {
        cancelled = true;
    }

    bool isCancellationRequested() const
    {
        return cancelled;
    }
};