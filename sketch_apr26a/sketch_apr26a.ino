#include <LiquidCrystal.h>;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); 
void setup() {
 lcd.begin(16 , 2);

}
int zapamietane = 0;
int kiedy = 0;
int chwila = 500;
void loop() {
  int czas  = millis();
  int przycisk = analogRead(0);
  if( (przycisk!=zapamietane) && (czas - kiedy > chwila))
  {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(przycisk);
  delay(10);
  zapamietane = przycisk;
  kiedy =  czas;
  }
 
}
