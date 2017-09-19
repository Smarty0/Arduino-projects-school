    int timer = 100;
    int LedPins[] = {A0, A1, A2, A3, A4, A5, A6, A7};
    int lightpin = 0;
    int inpin[] = {}; // set input pins
    int selectorP1 = 0;
    int selectorP2 = 0;
    int selectorP3 = 0;
    int edit;
    
void setup() 
{
      pinMode(inpin[1], INPUT)
      pinMode(inpin[2], INPUT)
      pinMode(inpin[3], INPUT)
    for (lightpin = 0; lightpin<8; lightpin++)
    {
      pinMode(LedPins[lightpin], OUTPUT);
    }
}

void loop() 
{
      selectorP1 = digitalRead(inpin[1])    // read pin 1
      selectorP2 = digitalRead(inpin[2])    // read pin 2
      selectorP3 = digitalRead(inpin[3])    // read pin 3


//main running loop
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
