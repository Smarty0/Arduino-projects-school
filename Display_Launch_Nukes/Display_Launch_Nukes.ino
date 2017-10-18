/*
  Name: Display
  Date: 10-10-2017
  Author: Marthijn Vlierman
  
  Description: Display to demonstrate different functions
  
  Revision: 1.0.0
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

void setup() 
{   
    pinMode(A0, INPUT);
    lcd.begin(16, 2);
}

void loop() 
{
    delay(200);
    lcd.setCursor(2,0);
    delay(500);
    lcd.print("Ready to launch nukes");
  for (int positionCounter = 0; positionCounter < 37; positionCounter++)
  {
    a = digitalRead(A0);      // read for input
    lcd.scrollDisplayLeft();  // scroll displayLeft
    delay(300);
    
  if (a == 0)
  
  Count_Down_T_Minus_TEN();
  }  
}

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
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("Kaboom");
  delay(200);
  lcd.clear();
  lcd.setCursor(7,0);
  lcd.print("Kaboom");
  delay(200);
  lcd.clear();
  lcd.setCursor(7,1);
  lcd.print("Kaboom");
  delay(200);
  lcd.clear();
  lcd.setCursor(4,1);
  lcd.print("Kaboom");
  delay(200);
 }
  lcd.clear();
}
