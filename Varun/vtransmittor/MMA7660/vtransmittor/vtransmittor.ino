#include <MMA7660.h>
#include <Wire.h>


void setup()
{
  Serial.begin(9600);
  MMA7660.init();
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
}
void loop()
{
  int x,y,z,e;
  delay(100); // There will be new values every 1000ms
  MMA7660.getValues(&x,&y,&z);
  digitalWrite(7, HIGH);
  e = digitalRead(6);
/*
if(e ==HIGH)
  {
    if(x<(-10))
    {
      Serial.print('a');
    }
    else if(x>10)
    {
      Serial.print('d');
  
    }
    else if(y>10)
    {
      Serial.print('w');
    }
    else if(y<(-10))
    {
      Serial.print('s');
    }
    else if(z<(5))
    {
      Serial.print('z');
    }
  }
*/  
Serial.print(x, y, z);

}




