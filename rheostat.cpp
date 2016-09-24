#include "rheostat.h"

const int RHEOSTAT_PIN = A3;

rheostat::rheostat()
{
    pinMode(RHEOSTAT_PIN, INPUT);
}

rheostat::~rheostate()
{

}

int rheostat::read()
{
    return analogRead(RHEOSTAT_PIN);
}
