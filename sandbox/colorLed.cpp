#include "colorLed.h"

colorLed::colorLed(int pin)
{
    m_pin = pin;

    m_colorVal = 0;

    pinMode(m_pin, OUTPUT);
}

colorLed::~colorLed()
{

}

void colorLed::set(int val)
{
    //Don't let the value exceed it's maximum or go below zero
    if(val > 255)
        val = m_colorVal = 255;
    else if(val < 0)
        val = m_colorVal = 0;

    digitalWrite(m_pin, val);
}

int colorLed::read()
{
    return m_colorVal;
}

void colorLed::add(int val)
{
    int curVal = read();

    //Don't let the value exceed it's maximum or go below zero
    if(val + curVal > 255)
    {
        m_colorVal = 255;  
        digitalWrite(m_pin, 255);
    }
    else if(val + curVal < 0)
    {
        m_colorVal = 0;
        digitalWrite(m_pin, 0);
    }
    else
    {
        m_colorVal = val + curVal;
        digitalWrite(m_pin, val + curVal);
    }
}
