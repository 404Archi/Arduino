#include <LiquidCrystal.h>;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int zapamietane = 0;
int kiedy = 0;
int chwila = 150;
int liczba = 0;
  int a = 0;//godziny
  int b = 0;//miuty
  int c = 0;//sekundy

void setup() {
  lcd.begin(16 , 2);

}

void loop() {
  int czas  = millis();
  int przycisk = analogRead(0);

  
}





