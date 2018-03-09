/*
  Name:Sensor_Test_Programma
  Date:20-02-2018
  Author: Marthijn Vlierman
  
  Description: Test programma om de sensoren te testen en data te versturen naar de seriele monitor
  
  Revision: 0.1
*/
 
// include libraries

// ----- Declare Constants ----- 

// ----- Declare Objects ----- 

// ----- Declare subroutines and/or functions ----- 
void analog_read(); // Lichtsensor lezen

void KnopControl(); //Knoppen op pin 8 en 22 lezen

void Afstandlezen(); // Afstandsensoren lezen

// ----- Declare Global Variables ----- 
int Lichtsensor1 = 0;
int Lichtsensor2 = 0;

byte Knop1 = 0;
byte Knop2 = 0;

int afstand1 = 0;
int afstand2 = 0;

// Setup
void setup() 
{
  Serial.begin(9600);   
  
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
  analog_read();
  Afstandlezen();
  KnopControl();
  
  Serial.print("Lichsensor1  ");
  Serial.println(Lichtsensor1);
  Serial.print("Lichtsensor2  ");
  Serial.println(Lichtsensor2);
  Serial.print("Knop1  ");
  Serial.println(Knop1);
  Serial.print("Knop2  ");
  Serial.println(Knop2);
  Serial.print("afstand1  ");
  Serial.println(afstand1);
  Serial.print("afstand2  ");
  Serial.println(afstand2);

  delay(1000);
}

void analog_read()
{
 
 Lichtsensor1 = analogRead(A0);

 Lichtsensor2 = analogRead(A1);
}

void KnopControl()
{
 Knop1 = digitalRead(8);

 Knop2 = digitalRead(22);
 
}

void Afstandlezen()
{
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(2);
  afstand1 = analogRead(A2);
  afstand2 = analogRead(A3);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW); 
}

