/*
  Name: Display_Sensor_Test_Programma
  Date:20-02-2018
  Author: Marthijn Vlierman
  
  Description: Test programma om het lcd scherm en de sensoren te testen.
  
  Revision: 0.1
*/
 
// include libraries
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 
DataWrite(); // Write any global data to the display
// ----- Declare Global Variables ----- 
int Afstandsensor1 = 0;
int Afstandsensor2 = 0;
int Lichtsensor1 = 0;
int Lichtsensor2 = 0;

// Setup
void setup() 
{   
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
  lcd.setCursor(0,0);
  lcd.print("AS1:0 AS2:0");
  lcd.setCursor(0,1);
  lcd.print("LS1:0 LS2:0");
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
}

// Main loop
void loop() 
{  
  
}

// Function or subroutine
void DataWrite() 
{
  lcd.clear();
  delay(200);
  
  
}
