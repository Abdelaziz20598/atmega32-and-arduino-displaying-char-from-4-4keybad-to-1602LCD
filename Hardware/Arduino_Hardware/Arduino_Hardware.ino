//setup LCD
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

char c = 'm';
void setup() {
  // setup buad rate for UART comm
  Serial.begin(9600);
  // initializing LCD
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, Omar!");
  delay(2000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  // (note: line 1 is the second row, since counting begins with 0):
  // print the number of seconds since reset:
  // ********************
  while(Serial.available()){
  delay(2);
  c = Serial.read();
  //readStringUART += c;
  }
  if (c != 'm'){
// set cursor to first line
  lcd.setCursor(0, 1); 

// Print a message to the LCD.
  lcd.print(c);
  delay(2000);
  lcd.clear();
  c = "";
  delay(2000);
}
}
