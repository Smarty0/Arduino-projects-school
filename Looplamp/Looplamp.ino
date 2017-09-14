// define Name to Pinnumber
// read Left To Right
    int ledPin1 = A0;
    int ledPin2 = A1;
    int ledPin3 = A2;
    int ledPin4 = A3;
    int ledPin5 = A4;
    int ledPin6 = A5;
    int ledPin7 = A6;
    int ledPin8 = A7;


void setup() {
// Activate all OUTPUTS
    pinMode (ledPin1, OUTPUT);
    pinMode (ledPin2, OUTPUT);
    pinMode (ledPin3, OUTPUT);
    pinMode (ledPin4, OUTPUT);
    pinMode (ledPin5, OUTPUT);
    pinMode (ledPin6, OUTPUT);
    pinMode (ledPin7, OUTPUT);
    pinMode (ledPin8, OUTPUT);
}

void loop() 
{
// left to right
    digitalWrite(ledPin1, LOW);
    delay(500);
    
    digitalWrite(ledPin2, LOW);
    delay(500);

    digitalWrite(ledPin3, LOW);
    delay(500);
    
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin1, HIGH);
    delay(500);
    
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(500);

    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin3, HIGH);
    delay(500);

    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin5, HIGH);
    delay(500);

    digitalWrite(ledPin6, HIGH);
    delay(500);

    digitalWrite(ledPin7, HIGH);
    delay(500);

    digitalWrite(ledPin8, HIGH);
    delay(500);

// right to left
    digitalWrite(ledPin8, LOW);
    delay(500);
    
    digitalWrite(ledPin7, LOW);
    delay(500);

    digitalWrite(ledPin6, LOW);
    delay(500);
    
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin8, HIGH);
    delay(500);
    
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin7, HIGH);
    delay(500);

    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin6, HIGH);
    delay(500);

    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin5, HIGH);
    delay(500);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(500);

    digitalWrite(ledPin3, HIGH);
    delay(500);

    digitalWrite(ledPin2, HIGH);
    delay(500);

    digitalWrite(ledPin1, HIGH);
    delay(500);
}
