/*
  Name: Serial Monitor to LCD scherm en buzzer
  Date: 08-03-2018
  Author: Marthijn Vlierman
  
  Description: Seriele monitor naar lcd scherm en een test van de buzzer
  
  Revision: 0.0.1
*/
 
// include libraries

#include <LCD.h>
#include <LiquidCrystal_I2C.h>

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

// ----- Declare subroutines and/or functions ----- 

// ----- Declare Global Variables ----- 
    

// Setup
void setup() 
{   
  lcd.begin(16,2);
  lcd.clear();
  
  Serial.begin(9600);
}

// Main loop
void loop() 
{  
  if(Serial.available())
  {
    delay(200);
    lcd.clear();

    while(Serial.available() > 0)
    {
      lcd.write(Serial.read());
    }
  }
}
