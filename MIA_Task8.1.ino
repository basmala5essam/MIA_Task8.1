#include "L298N.h"
#include "CytronMD10A.h"
#include "BTS7960.h"


void setup() {
  L298N_init(PA2, PA3, PA5);
  Cytron_init(PA0 , PA1);
  BTS_init(PA6, PA7);

}

void loop() {
  //L268N movement demonstration
  L298N_drive(PA2, PA3, PA5,200); //Forward with speed 200
  delay(300);
  L298N_drive(PA2, PA3, PA5,-150); //Backward with speed -150
  delay(300);
  L298N_drive(PA2, PA3, PA5,0);  //Stop
  delay(1000);

  //CytronMD10A movement demonstration


  Cytron_drive(PA0 , PA1, 180);  //Forward with speed 180
  delay(300);
  Cytron_drive(PA0 , PA1, -60); //Backward with speed -60
  delay(300);
  Cytron_drive(PA0 , PA1, 0); //Stop
  delay(1000);

  //BTS7960 movement demonstration
  BTS_drive(PA6, PA7,400);  //Forward with speed 255(max)
  delay(300);
  BTS_drive(PA6, PA7,-100);  //Backward with speed -100
  delay(300);
  BTS_drive(PA6, PA7,0); //Stop
  delay(1000);


}