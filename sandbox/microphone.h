#ifndef _MICROPHONE_H_
#define _MICROPHONE_H_

#include <Arduino.h>

class microphone
{
public:
    microphone();
    ~microphone();

    int read();

};

#endif
