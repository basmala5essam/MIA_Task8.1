#include "BTS7960.h"


void BTS_init(int RPWM, int LPWM){
  pinMode(RPWM,OUTPUT);
  pinMode(LPWM,OUTPUT);

}

void BTS_drive(int RPWM, int LPWM, int speed_in_pwm){
  if(speed_in_pwm > 0){ //postive speed means moving forward
     analogWrite(LPWM,0);
     if(speed_in_pwm > 255){
       analogWrite(RPWM,255);
     }
     else{
      analogWrite(RPWM,abs(speed_in_pwm));
     }
  }
  else if(speed_in_pwm < 0){ //negative speed means moving backward
    analogWrite(RPWM,0);
     if(speed_in_pwm < -255){
       analogWrite(LPWM,255);
     }
     else{
      analogWrite(LPWM,abs(speed_in_pwm));
     }
  } 
  else{ //zero speed means no movement
    analogWrite(RPWM,0);
    analogWrite(LPWM,0);
  } 

}

}