#ifndef _LED_H_
#define _LED_H_

#include <Arduino.h>

class led
{
public:
    led(int);
    ~led();

    int m_pin;

    void on();
    void off();
    int getState();

}

#endif
