#include "pushButt.h"

const int PUSHBUTT_PIN = 12;

pushButt::pushButt()
{
    pinMode(PUSHBUTT_PIN, INPUT);
}

pushButt::~pushButt()
{

}

int pushButt::getState()
{
    if(digitalRead(PUSHBUTT_PIN) == HIGH)
        return 1;
    else
        return 0;
}
