#include "expansionPort.h"

const int MOTOR_PIN = 3;

expanPort::expanPort()
{
    pinMode(MOTOR_PIN, OUTPUT);
}

expanPort::~expanPort()
{

}

void expanPort::setSpeed(int speed)
{
    analogWrite(MOTOR_PIN, speed);
}
