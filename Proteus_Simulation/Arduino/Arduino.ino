#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // run ic2_scanner sketch and get the IC2 address, which is 0x3f in my case,it could be 0x3f in many cases

String readStringUART;
char c = 'm';
void setup()
{
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd
}
 
void loop()
{
while(Serial.available()){
  delay(2);
  c = Serial.read();
  //readStringUART += c;
  }
  if (c != 'm'){
// set cursor to first line
  lcd.setCursor(1, 0); // desplaying on the 5 column and 1st row

// Print a message to the LCD.
  lcd.backlight(); // turn on backlight.
  lcd.print(c);
  lcd.noBacklight(); // turn off backlight
  delay(1000);
  lcd.clear();

}
}
