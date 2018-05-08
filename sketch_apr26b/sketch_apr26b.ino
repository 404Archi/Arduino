#include <LiquidCrystal.h>;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() {
  lcd.begin(16 , 2);

}
int zapamietane = 0;
int kiedy = 0;
int chwila = 150;
int liczba = 0;
void loop() {
  int czas  = millis();
  int przycisk = analogRead(0);


  if (liczba != zapamietane)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(liczba);
    zapamietane = liczba;
  }
  if (czas - kiedy > chwila)
  {
    //    if ( (przycisk >= 0)    && (przycisk < 50));
    if ( (przycisk >= 50)   && (przycisk < 195))  liczba++;
    if ( (przycisk >= 195)  && (przycisk < 380))  liczba--;
    //    if ( (przycisk >= 380)  && (przycisk < 555));
    //    if ( (przycisk >= 555)  && (przycisk < 790));
    //    if ( (przycisk >= 790)  && (przycisk < 1024)) lcd.print(liczba);
    kiedy =  czas;
  }

}
