/*
  Name: Arduino Analog to PWM
  Date:09-03-2018
  Author:Marthijn Vlierman
  
  Description: Converter van analoog 0 - 5v naar 0 tot 1 ms op de tiende nauwkeurig.
  
  Revision: 0.0.1
*/
 
// include libraries
  #include <Servo.h>
// ----- Declare Constants ----- 
  Servo myservo;
// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 

// ----- Declare Global Variables ----- 
int A = 0;   
byte Button = 0;
// Setup
void setup() 
{   
  pinMode(A0, INPUT);
  myservo.attach(6);
}

// Main loop
void loop()
{  
  

  A = analogRead(A0);
  
  A = map(A, 0, 1024, 1000, 2000); // 0 = 0,6ms, 180 = 2,4ms
  
  myservo.writeMicroseconds(A);
  //delay(200);
  
}
