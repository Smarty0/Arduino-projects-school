    int timer = 100;
    int LedPins[] = {A0, A1, A2, A3, A4, A5, A6, A7};
    int lightpin = 0;
   
void setup() 
{
    for(lightpin = 0; lightpin<8; lightpin++)
      {
        pinMode(LedPins[lightpin], OUTPUT);
      }
}

void loop() 
{
//main running loop
    for(lightpin = 0; lightpin < 8; lightpin++)
       {
       digitalWrite(LedPins[lightpin], LOW);
       delay(timer);

        digitalWrite(LedPins[lightpin + 1], LOW);
        delay(timer);

       digitalWrite(LedPins[lightpin], HIGH);
       delay(timer*2);

      }

    
    for(lightpin = 8; lightpin > 0; lightpin--)
       {
         digitalWrite(LedPins[lightpin], LOW);
          delay(timer);

          digitalWrite(LedPins[lightpin - 1], LOW);
          delay(timer);
          
          digitalWrite(LedPins[lightpin], HIGH);
          delay(timer*2);
       }         
}
