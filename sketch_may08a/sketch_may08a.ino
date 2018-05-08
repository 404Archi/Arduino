#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() {
  lcd.begin(16, 2);

}
void przes (String napis) {
  for (int i = 0; i < napis.length(); i++) {
    lcd.home();
    delay(100);
    int a = 0;
    for (int j = i; j < i + 16 && j < napis.length(); j++) {
      char znak = napis.charAt(j);
      lcd.print(znak);
      a++;
      if(a > napis.length())lcd.print(" ");

    }
  }
}

void loop() {
  lcd.clear();
  przes("Indyk biegnie po trawie");

}
