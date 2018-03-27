/*
  Name: Spiraal en vierkant
  Date: 20-03-2018
  Author: Marthijn Vliermna
  
  Description: Vierkant rijden
  
  Revision: 0.2.0
*/
 
// include libraries

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 
void vooruit();
void links();
void rond();
// ----- Declare Global Variables ----- 
int x = 0;

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
    while(x < 4)
      {
        vooruit();
        delay(1000);
        links();
        delay(630);
        x++;
      }
      rond();
      x = 0;
      delay(1600);
}



// Function or subroutine
void vooruit() 
{
    digitalWrite(14, LOW);
    digitalWrite(16, LOW);
    analogWrite(5,255);
    analogWrite(6, 250);
  
}

void links()
{
    digitalWrite(14, HIGH);
    digitalWrite(16,LOW);
    analogWrite(5,255);
    analogWrite(6,255); 
}

void rond()
{
    digitalWrite(14, HIGH);
    analogWrite(6, 0);
    digitalWrite(16, LOW);
    analogWrite(5,255);
}
