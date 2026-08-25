#include "CytronMD10A.h"

void Cytron_init(int DIR, int PWM){
  pinMode(DIR,OUTPUT);
  pinMode(PWM,OUTPUT);

}

void Cytron_drive(int DIR, int PWM, int speed_in_pwm){
  if(speed_in_pwm > 0){ //postive speed means moving forward
     digitalWrite(DIR,LOW);
     if(speed_in_pwm > 255){
       analogWrite(PWM,255);
     }
     else{
      analogWrite(PWM,abs(speed_in_pwm));
     }
  }
  else if(speed_in_pwm < 0){ //negative speed means moving backward
    digitalWrite(DIR,HIGH); 
    if(speed_in_pwm < -255){ 
      analogWrite(PWM,255);
    }
    else{ 
      analogWrite(PWM,abs(speed_in_pwm));
     }
  } 
  else{ //zero speed means no movement
    analogWrite(PWM,0);
  } //didn't write a signal for DIR since it is a Don't Care

}

//this configuration is based on the truth table logic of CytronMDD10A datasheet