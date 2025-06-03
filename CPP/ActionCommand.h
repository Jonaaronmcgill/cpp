#pragma once

class JumpCommand : public Command
{
public:
    void execute() override { std::cout << "Jump\n";}
};

class AttackCommand : public Command
{
public:
    void execute() override { std::cout << "Attack\n";}
};
