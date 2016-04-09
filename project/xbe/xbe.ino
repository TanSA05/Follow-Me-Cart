#include <SoftwareSerial.h>
SoftwareSerial XBee(0, 1);
void setup(){
  XBee.begin(9600);
  Serial.begin(9600);
}
void loop(){
  XBee.write('H');
  delay(1000);
  XBee.write('L');
  delay(2000);
}
  
