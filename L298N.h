#ifndef L298N_h
#define L298N_h

#include <Arduino.h>
#include <math.h>

void L298N_init(int IN1, int IN2, int ENA);

void L298N_drive(int IN1, int IN2, int ENA, int speed_in_pwm);

#endif