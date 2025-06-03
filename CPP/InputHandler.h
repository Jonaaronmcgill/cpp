#pragma once
#include "ActionCommand.h"
class InputHandler
{
private:
    Command* buttonX;
    Command* buttonY;
    Command* buttonA;
    Command* buttonB;
    
public:
    static constexpr const char* BUTTON_X = "X";
    static constexpr const char* BUTTON_Y = "Y";
    static constexpr const char* BUTTON_A = "A";
    static constexpr const char* BUTTON_B = "B";
    
public:
    InputHandler()
    {
        
    }
    
    ~InputHandler()
    {
        delete buttonX;
        delete buttonY;
        delete buttonA;
        delete buttonB;
    }
    void SetButtonX(Command* cmd) { buttonX = cmd; }
    void SetButtonY(Command* cmd) { buttonY = cmd; }
    void SetButtonA(Command* cmd) { buttonA = cmd; }
    void SetButtonB(Command* cmd) { buttonB = cmd; }
    
    Command* HandleInput()
    {
        if(IsPressed(BUTTON_X)){return buttonX;}
        if(IsPressed(BUTTON_Y)){return buttonY;}
        if(IsPressed(BUTTON_A)){return buttonA;}
        if(IsPressed(BUTTON_B)){return buttonB;}

        return nullptr;
    }
    
    bool IsPressed(const char* button)
    {
        if(button == BUTTON_X) { return true; }
        if(button == BUTTON_Y) { return true; }
        if(button == BUTTON_A) { return true; }
        if(button == BUTTON_B) { return true; }

        
        return false;
    }
};
