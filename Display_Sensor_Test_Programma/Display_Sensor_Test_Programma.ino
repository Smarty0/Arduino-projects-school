/*
  Name: Display_Sensor_Test_Programma
  Date:20-02-2018
  Author: Marthijn Vlierman
  
  Description: Test programma om de sensoren te testen en data te versturen naar de seriele monitor
  
  Revision: 0.1
*/
 
// include libraries

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 
void analog_read();
// ----- Declare Global Variables ----- 
int Afstandsensor1 = 0;
int Afstandsensor2 = 0;
int Lichtsensor1 = 0;
int Lichtsensor2 = 0;
int Knop1 = 0;
int Knop2 = 0;

// Setup
void setup() 
{
  Serial.begin(9600);   
  delay(500);
  Serial.print("Serial bus ready");
  delay(500);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  
  pinMode(A1,INPUT);
  pinMode(A0,INPUT);
  
  pinMode(8, INPUT);
  pinMode(22, INPUT);
}

// Main loop
void loop() 
{  
  Serial.println(Lichtsensor1);
  Serial.println(Lichtsensor2);
  Serial.println(Knop1);
  Serial.println(Knop2);
  analog_read();
  
}

void analog_read()
{
 delay(1000);
 
 Lichtsensor1 = analogRead(A0);

 Lichtsensor2 = analogRead(A1);
 
 Knop1 = digitalRead(8);

 Knop2 = digitalRead(22);
 
}

