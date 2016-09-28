#ifndef _THERMOMETER_H_
#define _THERMOMETER_H_

#include <Arduino.h>

class thermometer
{
public:
    thermometer();
    ~thermometer();

    long readTemp();
    float getVoltage();
    float getCelsius();
    float getFahrenheit();
};

#endif

