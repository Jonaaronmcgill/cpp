#pragma once

// Command Interface
class Command
{
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};
