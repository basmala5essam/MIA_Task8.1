#pragma once

#include <Arduino.h>
#include <math.h>

void BTS_init(int RPWM, int LPWM);

void BTS_drive(int RPWM, int LPWM, int speed_in_pwm);
