#ifndef _SANDBOX_CONTROL_H
#define _SANDBOX_CONTROL_H

#include "colorLed.h"
#include "digitalSwitch.h"
#include "expansionPort.h"
#include "led.h"
#include "lightSensor.h"
#include "microphone.h"
#include "pushButt.h"
#include "rheostat.h"
#include "thermometer.h"


class sandbox
{
public:
    sandbox();
    ~sandbox();

    digitalSwitch m_dSwitch;
    expanPort m_expanPort;
    lightSensor m_lightSensor;
    microphone m_mic;
    pushButt m_pushButt;
    rheostat m_rheostat;
    thermometer m_therm;
  
    led m_led4 = led(4);
    led m_led5 = led(5);
    led m_led6 = led(6);
    led m_led7 = led(7);
    led m_led8 = led(8);

    colorLed m_led_r = colorLed(9);
    colorLed m_led_g = colorLed(10);
    colorLed m_led_b = colorLed(11);
};

#endif
