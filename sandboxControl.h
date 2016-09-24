#ifndef _SANDBOX_CONTROL_H
#define _SANDBOX_CONTROL_H

#include <vector>
#include "colorLed.h"
#include "digitalSwitch.h"
#include "expansionPort.h"
#include "led.h"
#include "lightSensor.h"
#include "microphone.h"
#include "pushButt.h"
#include "rheostat.h"
#include "thermometer.h"


class sandboxCtrl
{
public:
    sandboxCtrl();
    ~sandboxCtrl();

    digitalSwitch *m_dSwitch;
    expanPort *m_expanPort;
    lightSensor *m_lightSensor;
    microphone *m_mic;
    pushButt *m_pushButt;
    rheostat *m_rheostat;
    thermometer *m_therm;

    std::vector<led*> m_leds;
    std::vector<colorLed*> m_cLeds;
}

#endif
