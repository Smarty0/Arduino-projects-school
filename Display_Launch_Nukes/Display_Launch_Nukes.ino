/*
  Name: Display
  Date: 10-10-2017
  Author: Marthijn Vlierman
  
  Description: Display to demonstrate different functions
  
  Revision: 0.0.1
*/
 
// include libraries
#include <LiquidCrystal.h>

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 
void Count_Down_T_Minus_TEN();
void Kaboom();

// ----- Declare Global Variables ----- 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int timer = 1000;
byte a = 0;

// Setup
void setup() 
{   
    pinMode(A0, INPUT);
    lcd.begin(16, 2);
}

// Main loop
void loop() 
{
    delay(2000);
    lcd.setCursor(0,0);
    lcd.print("Ready to launch nukes");
  // scroll 37 positions (display length + string length) to the left
  for (int positionCounter = 0; positionCounter < 37; positionCounter++)
  {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait:
    delay(300);
    a = digitalRead(A0);
  if (a == 0)
  Count_Down_T_Minus_TEN();
  }  
}

// Function or subroutine
void Count_Down_T_Minus_TEN() 
{
  lcd.clear();  
  for(int countdown = 10; countdown > -1; countdown--)
  {
    lcd.setCursor(8,0);
    lcd.print(countdown);
    delay(1000);
    lcd.clear();
  }
  Kaboom();
}
void Kaboom()
{
  for(int counter = 0; counter < 15; counter++)
 { 
  lcd.setCursor(6,0);
  lcd.print("Kaboom");
 }
}

