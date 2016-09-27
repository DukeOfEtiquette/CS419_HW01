#include "sandboxControl.h"

sandboxCtrl::sandboxCtrl()
{
    m_dSwitch = new digitalSwitch();
    m_expanPort = new expanPort();
    m_lightSensor = new lightSensor();
    m_mic = new microphone();
    m_pushButt = new pushButt();
    m_rheostat = new rheostat();
    m_therm = new thermometer();

    //Make all the color leds
    for(int i = 9; i < 12; i++)
        m_cLeds.push_back(new colorLed(i));

    //Make leds 4 thru 8
    for(int i = 4; i < 9; i++)
        m_leds.push_back(new led(i));

    //Make led 13
    m_leds.push_back(new led(13));
}

sandboxCtrl::~sandboxCtrl()
{
    delete m_dSwitch;
    delete m_expanPort;
    delete m_lightSensor;
    delete m_mic;
    delete m_pushButt;
    delete m_rheostat;
    delete m_therm;

    for(int i = 0; i < m_cLeds.size(); i++)
        delete m_cLeds[i];

    for(int i = 0; i < m_leds.size(); i++)
        delete m_leds[i];
}
