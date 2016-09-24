#include "thermometer.h"

const int THERM_PIN = A0;

thermometer::thermometer()
{
    pinMode(THERM_PIN, INPUT);
}

thermometer::~thermometer()
{

}

long thermometer::readTemp()
{
    return analogRead(THERM_PIN); 
}

float thermometer::getVoltage()
{
    return readTemp() * (5 / 1023.0);
}

float thermometer::getCelsius()
{
    return (getVoltage() - 0.5) * 100;
}

float thermometer::getFahrenheit()
{
    return (getCelsius() * 9.0/5.0) + 32.0;
}
