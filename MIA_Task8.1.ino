#include "L298N.h"
#include "CytronMD10A.h"
#include "BTS7960.h"


void setup() {
  L298N_init(int IN1, int IN2, int ENA);
  Cytron_init(int DIR, int PWM);
  BTS_init(int RPWM, int LPWM);

}

void loop() {
  // put your main code here, to run repeatedly:

}