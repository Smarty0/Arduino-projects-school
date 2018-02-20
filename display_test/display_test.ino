#include <LCD.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

//LiquidCrystal_I2C lcd(0x38, BACKLIGHT_PIN, POSITIVE);  // Set the LCD I2C address


// Creat a set of new characters


void setup()
{
   lcd.begin (16, 2);
   lcd.setBacklight(HIGH);
   lcd.setCursor(0,0);
}
void loop()
{
   lcd.print("hallo hier ben ik");
}
