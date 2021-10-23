#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x20,16,2);  // run ic2_scanner sketch and get the IC2 address, which is 0x3f in my case,it could be 0x3f in many cases

String readStringUART;

void setup()
{
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd
}
 
void loop()
{
while(Serial.available()){
  delay(2);
  char c = Serial.read();
  readStringUART += c;
  }
  if (readStringUART.length() > 0){
// set cursor to first line
lcd.setCursor(1, 0); // desplaying on the 5 column and 1st row

// Print a message to the LCD.
  lcd.backlight(); // turn on backlight.
  lcd.print(readStringUART);
  lcd.noBacklight(); // turn off backlight
  delay(2000);
  lcd.clear();
  readStringUART = "";
  delay(2000);
}
}
