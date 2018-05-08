#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
byte z[8] ={
                      B11111,
                      B00001,
                      B00010,
                      B11111,
                      B01000,
                      B10000,
                      B11111,
                      B00000
                     };
byte l[8] ={
                      B01100,
                      B00100,
                      B00110,
                      B00100,
                      B01100,
                      B00100,
                      B01110,
                      B00000
                     };
byte o[8] ={
                      B00010,
                      B00100,
                      B01110,
                      B10001,
                      B10001,
                      B10001,
                      B01110,
                      B00000
                     };
byte a[8] ={
                      B00000,
                      B01110,
                      B00001,
                      B01111,
                      B10001,
                      B01111,
                      B00010,
                      B00001
                     };
void setup() {
  lcd.begin(16,2);
  lcd.createChar(0, z);
  lcd.createChar(1, l);
  lcd.createChar(2, o);
  lcd.createChar(3, a);
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(2));
  lcd.print("w biega po ");
  lcd.serCousor(
  lcd.write(byte(1));
  lcd.write(byte(3));
  lcd.print("ce");
} 
void loop() {

}
