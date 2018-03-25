 

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

// Setup
void setup() 
{   
  Serial.begin(9600);
  pinMode(A0, INPUT);
  myservo.attach(6);
}

// Main loop
void loop()
{  

  A = analogRead(A0);
  
  Serial.print("Analog IN  ");
  Serial.println(A);
  
  A = map(A, 0, 1024, 500, 2500);
  
  Serial.print("0,180 waarde  ");
  Serial.println(A);
  
  myservo.writeMicroseconds(A);
  //delay(200);
  
}
