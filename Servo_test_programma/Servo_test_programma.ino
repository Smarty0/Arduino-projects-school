/*
  Name: Servo_test_programma
  Date: 10-03-2018
  Author: Marthijn Vlierman
  
  Description: Servo testen
  
  Revision: 0.0.1
*/
 
// include libraries
#include <Servo.h>

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 
  Servo myservo;
  Servo myservo1;
// ----- Declare subroutines and/or functions ----- 

// ----- Declare Global Variables ----- 
    

// Setup
void setup() 
{   
  myservo.attach(15);
  myservo1.attach(23);
}

// Main loop
void loop() 
{  
  myservo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);

  myservo1.write(0);
  delay(1000);
  myservo1.write(180);
  delay(1000);


}
