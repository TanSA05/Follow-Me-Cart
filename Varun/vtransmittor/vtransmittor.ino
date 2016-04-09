#include <Wire.h>
#include <MMA7660.h>

int pin1 = 13;
int pin2 = 12;
int pin3 = 11;
int pin4 = 10;

void setup()
{
  Serial.begin(9600);
  MMA7660.init();
}

void loop()
{
  int x,y,z, a, b, c;
  delay(1000); // There will be new values every 1000ms
  MMA7660.getValues(&x,&y,&z);
  
  if(x<(-10))
  {
    Serial.print(a);
  }
  else if(x>10)
  {
    Serial.print(d);

  }
  else if(y>10)
  {
    Serial.print(w);
  }
  else if(y<(-10))
  {
    Serial.print(s);
  }
}

