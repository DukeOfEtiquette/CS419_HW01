#include "microphone.h"

const int MIC_PIN = A2;

microphone::microphone()
{
    pinMode(MIC_PIN, INPUT);
}

microphone::~microphone()
{

}

int microphone::read()
{
    return analogRead(MIC_PIN);
}
