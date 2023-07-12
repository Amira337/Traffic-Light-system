// C++ code
int x=0;
void setup()
{
 Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);
 digitalWrite(13, HIGH);
 delay(1000); // Wait for 1000 millisecond(s)
 while(x<3){ pinMode(13,OUTPUT);
 digitalWrite(8, HIGH);
 delay(500); // Wait for 1000 millisecond(s)
 digitalWrite(8, LOW);
 delay(500); // Wait for 1000 millisecond(s)
 x++;
  }
 digitalWrite(13, LOW);
 digitalWrite(7, HIGH);
 delay(1000); // Wait for 1000 millisecond(s)
 digitalWrite(7, LOW);
 delay(1000); // Wait for 1000 millisecond(s) 
}

void loop()
{
 
}