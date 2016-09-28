#ifndef _RHEOSTAT_H_
#define _RHEOSTAT_H_

#include <Arduino.h>

class rheostat
{
public:
    rheostat();
    ~rheostat();

    int read();

};

#endif
