// MMA7660 Library
// by Ronald Schmid <schmron+dev@gmail.com>
// Created 18 May 2012
// Version 0.0.1
//
// Control MMA7660 I2C Accelerometer

#include "Wire.h"
#include "MMA7660.h"

void setup() {
  Serial.begin(38400);
  Wire.begin();
  
  // init oled display
  accel.init();
  
  // wait a while
  delay(100);
}

void loop() {
  // get accelerator data
  accel.getValues();
  Serial.print("X: ");Serial.println(accel.x, DEC);
  Serial.print("Y: ");Serial.println(accel.y, DEC);
  Serial.print("Z: ");Serial.println(accel.z, DEC);
  delay(500);
}
