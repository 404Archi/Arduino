#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() {
  lcd.begin(16, 2);

}

void loop() {
  lcd.clear();
  int i = analogRead(0);
  lcd.print(i);
  delay(100);
}
