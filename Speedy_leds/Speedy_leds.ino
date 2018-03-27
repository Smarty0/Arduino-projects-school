/*
  Name: Speedy leds
  Date: 27-03-2018
  Author: Marthijn Vlierman
  
  Description: Leds gaan van langzaam naar snel en weer terug knipperen
  
  Revision: 0.0.1
*/
 
// include libraries

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 

// ----- Declare Global Variables ----- 
int x = 400; 
int z = 0;

// Setup
void setup() 
{   
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(17,OUTPUT);
  
    delay(2000);
       
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    digitalWrite(30, LOW);
    digitalWrite(17, LOW);
}

// Main loop
void loop() 
{  
  for(x = 400;x >= 10;x = x - 10)
  {
    delay(x);
    digitalWrite(11, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(17, HIGH);
    delay(x);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    digitalWrite(30, LOW);
    digitalWrite(17, LOW);
  }
    
    if(x = 10)
    {
      while(z <= 100)
      {
        delay(10);
        digitalWrite(11, HIGH);
        digitalWrite(13, HIGH);
        digitalWrite(30, HIGH);
        digitalWrite(17, HIGH);
        delay(10);
        digitalWrite(11, LOW);
        digitalWrite(13, LOW);
        digitalWrite(30, LOW);
        digitalWrite(17, LOW);
        z++;
      }
      z = 0;
    } 
for(x = 10;x <= 400;x = x + 10)
  {
    delay(x);
    digitalWrite(11, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(17, HIGH);
    delay(x);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    digitalWrite(30, LOW);
    digitalWrite(17, LOW);
  } 
}

