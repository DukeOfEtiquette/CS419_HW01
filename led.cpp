#include "led.h"

led::led(int pin)
{
    m_pin = pin;

    pinMode(m_pin, OUTPUT);
}

led::~led()
{

}

void led::on()
{
    digitalWrite(m_pin, HIGH);
}

void led::off()
{
    digitalWrite(m_pin, LOW);
}

int led::getState()
{
    if(digitalRead(m_pin) == HIGH)
        return 1;
    else
        return 0;
}
