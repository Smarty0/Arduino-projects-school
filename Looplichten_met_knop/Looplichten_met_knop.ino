/*
  Name: INPUT test
  Date: 27-09-2017
  Author: Marthijn Vlierman
  
  Description: Een test programma waarmee input van 3 verschillende pinnen gelezen kan worden.
  
  Revision: 1.0.0
*/
 
// include libraries

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 
void looplamp();

// ----- Declare Global Variables ----- 
int LedArray1[] {23, 25, 27, 29, 31, 33, 35, 37};
int LedArray2[] {39, 41, 43, 45, 47, 49, 51, 53};
int LedArray3[] {0, 1, 2, 3, 4, 5, 6, 7,}; 
int timer = 100;
int lightpin = 0;

byte a = 0;
byte b = 0;
byte c = 0;
byte x = 0;
byte y = 0;
byte z = 0;

// Setup
void setup() 
{   
    for (int led = 0; led < 8; led++)
      {
        pinMode(LedArray1[led*2+23], OUTPUT);
        digitalWrite(LedArray1[led*2+23], HIGH);

        pinMode(LedArray2[led*2+39], OUTPUT);
        digitalWrite(LedArray2[led*2+39], HIGH);

        pinMode(LedArray3[led], OUTPUT);
        digitalWrite(LedArray3[led], HIGH);
      }
        pinMode(8, INPUT_PULLUP);
        pinMode(9, INPUT_PULLUP);
        pinMode(10, INPUT_PULLUP);


}

// Main loop
void loop() 
{  
  a = digitalRead(8);
  b = digitalRead(9);
  c = digitalRead(10);

  if(a == 1) //looplamp1
    {
       b = 0;
       c = 0;
       z = 23;
       y = 2;
       x = 2;
       looplamp();
    }
  if(b == 1) //looplamp2
    {
       a = 0;
       c = 0;
       z = 39;
       y = 2;
       x = 2;
       looplamp();
    }
  if(c == 1) //looplamp3
    {
       a = 0;
       b = 0;
       z = 0;
       y = 1;
       x = 1;
       looplamp();
     }
}

// Function or subroutine
void looplamp() 
{
 for(lightpin = 0; lightpin < 7; lightpin++)
       {
       digitalWrite(lightpin*x+z, LOW);
       delay(timer);

        digitalWrite(lightpin*x+z+y, LOW);
        delay(timer);

       digitalWrite(lightpin*x+z, HIGH);
       delay(timer*2);

      }

    
    for(lightpin = 7; lightpin > 0; lightpin--)
       {
         digitalWrite(lightpin*x+z, LOW);
          delay(timer);

          digitalWrite(lightpin*x+z-y, LOW);
          delay(timer);
          
          digitalWrite(lightpin*x+z, HIGH);
          delay(timer*2);
       }
}
