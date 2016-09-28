#include "digitalSwitch.h"

const int DSWITCH_PIN = 2;

digitalSwitch::digitalSwitch()
{
    pinMode(DSWITCH_PIN, INPUT);
}

digitalSwitch::~digitalSwitch()
{

}

int digitalSwitch::getState()
{
    if(digitalRead(DSWITCH_PIN) == HIGH)
        return 1;
    else
        return 0;
}
