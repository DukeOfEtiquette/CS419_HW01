#ifndef _DIGITALSWITCH_H_
#define _DIGITALSWITCH_H_

#include <Arduino.h>

class digitalSwitch
{
public:
    digitalSwitch();
    ~digitalSwitch();

    int getState();

}

#endif
