#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
String napis;
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);

}

void loop() {
  
  if( Serial.available() > 0){
    napis = Serial.readString();
    Serial.println(napis);
    lcd.clear(); 
  }
  for(int i = 0;i < napis.length();i++)
  {
     lcd.setCursor(i+0,0);
    lcd.print(napis.charAt(i));
    
  }

}
