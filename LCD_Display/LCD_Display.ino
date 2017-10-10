/*
  Name: LCD Display
  Date: 04-10-2017
  Author: Marthijn Vlierman
  
  Description: What are we gonna do today?
               Take over the world!
              
    
  Revision: 1.0.0
*/
 
// include libraries
#include <LiquidCrystal.h>
// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 

// ----- Declare Global Variables ----- 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int timer = 2000;    

// Setup
void setup() 
{   
  lcd.begin(16, 2);
}

// Main loop
void loop() 
{  
  lcd.clear();
    lcd.setCursor(0,0); 
      lcd.print("hello!");
  delay(timer);
  
  lcd.clear();
    lcd.setCursor(0,0); 
      lcd.print("What are we");
    lcd.setCursor(0,1);
      lcd.print("gonna do today?");
  delay(timer);
  
  lcd.clear();
    lcd.setCursor(0,0); 
      lcd.print("Same thing we");
    lcd.setCursor(0,1);
      lcd.print("do every day.");
  delay(timer);
  
  lcd.clear();
    lcd.setCursor(0,0); 
      lcd.print("Take over");
    lcd.setCursor(0,1);
      lcd.print("the world!");
  delay(timer);
}

// Function or subroutine
void function() {

}
