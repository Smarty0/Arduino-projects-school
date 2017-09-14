    int timer = 100;
    int LedPins[] = {A0, A1, A2, A3, A4, A5, A6, A7};
    int lightpin = 0;
    
void setup() 
{
    for (lightpin = 0; lightpin<8; lightpin++)
    {
      pinMode(LedPins[lightpin], OUTPUT);  
    }
}

void loop() 
{
    for (lightpin = 0; lightpin < 8; lightpin++)
    {
      digitalWrite(lightpin, HIGH);
      delay(timer);
    }
        for (lightpin = 8; lightpin > 0; lightpin--)
    {
      digitalWrite(lightpin, HIGH);
      delay(timer);
    }         
}
