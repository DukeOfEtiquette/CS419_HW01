#ifndef _COLORLED_H_
#define _COLORLED_H_

#include <Arduino.h>

class colorLed
{
public:
    colorLed(int);
    ~colorLed();

    int m_pin;

    void set(int);
    int read();
    void add(int);

private:

};

#endif
