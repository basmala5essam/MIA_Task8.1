#ifndef CytronMD10A_h
#define CytronMD10A_h

#include <Arduino.h>
#include <math.h>


void Cytron_init(int DIR, int PWM);

void Cytron_drive(int DIR, int PWM, int speed_in_pwm);

#endif