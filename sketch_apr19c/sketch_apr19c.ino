#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
byte Smile[8] ={
                      B00000,
                      B01010,
                      B01010,
                      B00000,
                      B00100,
                      B10001,
                      B01110,
                      B00000
                     }; 
byte Sad[8] ={
                      B00000,
                      B01010,
                      B01010,
                      B00000,
                      B00100,
                      B00000,
                      B01110,
                      B10001
                     };  
void setup() {
  lcd.begin(16,2);
  lcd.createChar(0, Smile);
  lcd.createChar(1, Sad);
}

void loop() {
  lcd.clear();
  int x = random(0,16);
  int y = random(0,2);
  int z = random(0,2);
  lcd.setCursor(0+x,0+y);
  lcd.write(byte(z));
  delay(500);

}
