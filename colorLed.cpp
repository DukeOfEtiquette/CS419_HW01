#include "colorLed.h"

colorLed::colorLed(int pin)
{
    m_pin = pin;

    pinMode(m_pin, OUTPUT);
}

colorLed::~colorLed()
{

}

void colorLed::set(int val)
{
    //Don't let the value exceed it's maximum or go below zero
    if(val > 255)
        val = 255;
    else if(val < 0)
        val = 0;

    digitalWrite(m_pin, val);
}

int colorLed::read()
{
    return digitalRead(m_pin);
}

void colorLed::add(int val);
{
    int curVal = read();

    //Don't let the value exceed it's maximum or go below zero
    if(val + curVal > 255)
        digitalWrite(m_pin, 255);
    else if(val + curVal < 0)
        digitalWrite(m_pin, 0);
    else
        digitalWrite(m_pin, val + curVal);
}
