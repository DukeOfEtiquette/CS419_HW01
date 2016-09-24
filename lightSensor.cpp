#include "lightSensor.h"

const int LIGHTSENSOR_PIN = A1;

lightSensor::lightSensor()
{
    pinMode(LIGHTSENSOR_PIN, INPUT);
}

lightSensor::~lightSensor()
{

}

long lightSensor::readSensor()
{
    return analogRead(LIGHTSENSOR_PIN);
}
