/*
  Name: BBR Motor test
  Date: 20-02-2018
  Author: Marthijn Vlierman
  
  Description: BBR Motor test programma.
  Vooruit 5 seconden
  Achteruit 5 seconden
  
  Revision:0.1
*/
 
// include libraries

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 
 void Forward();
 void Backward();
// ----- Declare Global Variables ----- 
    

// Setup
void setup() 
{   
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(16, OUTPUT);
  
}

// Main loop
void loop() 
{  
    Forward();
    delay(5000);
    Backward();
    delay(5000);
    
}

// Function or subroutine
void Forward() 
{
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    analogWrite(5,255);
    analogWrite(6, 255);
}

void Backward()
{
    digitalWrite(14, HIGH);
    digitalWrite(16, HIGH);
    analogWrite(5,0);
    analogWrite(6, 0 );
}
