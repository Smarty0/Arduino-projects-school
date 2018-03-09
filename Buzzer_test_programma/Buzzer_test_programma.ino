/*
  Name:Buzzer_test_programma
  Date:08-03-2018
  Author:Marthijn Vlierman 
  
  Description:Buzzer test 
  
  Revision:0.0.1
*/
 
// include libraries

// ----- Declare Constants ----- 
#include "pitches.h"
// ----- Declare Objects ----- 
int melody[] = {NOTE_C1, NOTE_C2, NOTE_C3, NOTE_C4, NOTE_C4, NOTE_C3, NOTE_C2, NOTE_C1};
int Nootlengtes[] = {1, 1, 1, 1, 1, 1, 1, 1};
// ----- Declare subroutines and/or functions ----- 

// ----- Declare Global Variables ----- 
    

// Setup
void setup() 
{   
  pinMode(7, OUTPUT);
  
}

// Main loop
void loop() 
{ 
  for(int Noot = 0; Noot < 8; Noot++)
    {
    int Nootlengte = 1000 / Nootlengtes[Noot];
    tone(7, melody[Noot], Nootlengte);
    delay(1000);
    noTone(7);                                                                                                                                
    delay(1000);
    } 
}
