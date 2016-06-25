#ifndef __AIRQUALITY_H__
#define __AIRQUALITY_H__
#include"Arduino.h"
class AirQuality
{
public:
    int i ;
    long vol_standard;
    int init_voltage;
    int first_vol;
    int last_vol;
    int temp;
    int counter;
    boolean timer_index;
    boolean error;
    void init(int pin);
    int slope(void);
private:
    int _pin;
    void avgVoltage(void);
};
#endif