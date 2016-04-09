void setup()
{
    Serial.begin(9600);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    
}
void loop()
{
  char mydata;
  if(Serial.available()>0)
  {
	  mydata = Serial.read();
	  
	  {
		  
		  if(mydata=='a')
		  {
		//Serial.print("Left");
			digitalWrite(10, LOW);
			digitalWrite(11, HIGH);
			digitalWrite(12, LOW);
			digitalWrite(13, HIGH);
		  }
		  else if(mydata=='d')
		  {
	//		Serial.print("Right");
			
			digitalWrite(10, HIGH);
			digitalWrite(11, LOW);
			digitalWrite(12, HIGH);
			digitalWrite(13, LOW);
		  }
		  else if(mydata=='w')
		  {
		//	Serial.print("Forward");
			
			digitalWrite(10, HIGH);
			digitalWrite(11, LOW);
			digitalWrite(12, LOW);
			digitalWrite(13, HIGH);
		  }
		  else if(mydata=='s')
		  {
	//		Serial.print("reverse");
			
			digitalWrite(10, LOW);
			digitalWrite(11, HIGH);
			digitalWrite(12, HIGH);
			digitalWrite(13, LOW);
		  }
                  else if(mydata=='z')
		  {
	//		Serial.print("stop");
			
			digitalWrite(10, LOW);
			digitalWrite(11, LOW);
			digitalWrite(12, LOW);
			digitalWrite(13, LOW);
		  }
		}	
	}
}


