#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() {
  lcd.begin(16,2);
  
}
void migaj(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Kaczka");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Stonoga");
  delay(1000);
}
void literkaPoLiterce(){
  String napis = "Indyk";
  String napis1 = "Kaczka";
  delay(1000);
  lcd.clear();
  int a;
  if(napis1.length()>napis.length())int a = napis1.length();
  else int a = napis.length();
  for(int i = 0;i < napis1.length();i++)
  {
    lcd.setCursor(15-i,0);
    lcd.print(napis.charAt(napis.length()-i-1));
    delay(1000);
     lcd.setCursor(i+0,0);
    lcd.print(napis1.charAt(i));
    delay(1000);
  }

  
 
}

void loop() {
//  migaj();
  literkaPoLiterce();
}
