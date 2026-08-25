#include "L298N.h"

void L298N_init(int IN1, int IN2, int ENA){
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

}
void L298N_drive(int IN1, int IN2, int ENA, int speed_in_pwm){
  if(speed_in_pwm > 0){ //positive speed means moving forward
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    if(speed_in_pwm > 255){
      analogWrite(ENA,255);
    }
    else{
      analogWrite(ENA, abs(speed_in_pwm));
    }
 }
 else if(speed_in_pwm < 0){ //negative speed means moving backward
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    if(speed_in_pwm < -255){
      analogWrite(ENA,255);
    }
    else{
      analogWrite(ENA, abs(speed_in_pwm));
    }
 }
 else{         //zero speed means no movement
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 0);
 }

}