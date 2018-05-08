#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int a = 0;//godziny dziesiątki
int b = 0;//minuty dziesiątki
int c = 0;//sekundy dziesiątki
int a1 = 0;//godziny jednosci
int b1 = 0;//minuty jednosci
int c1 = 0;//sekundy jednosci
int key;
void setup() {
  lcd.begin(16, 2);

}

void loop() {
  key = analogRead(0);
  keys();
  licz();
  pisz();
  delay(1000);

}
void keys() {
  if ((key >= 0) && (key < 50))b1++;//minuty jedności
  if ((key >= 350) && (key < 555))b1--;
  if ((key >= 50) && (key < 350))a1++;
  if ((key >= 555) && (key < 850))a1--;
}
void pisz() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(a);
  lcd.print(a1);
  lcd.print(":");
  lcd.print(b);
  lcd.print(b1);
  lcd.print(":");
  lcd.print(c);
  lcd.print(c1);
}
void licz() {
  c1++;
  if (c1 == 10) {
    c++;
    c1 = 0;
  }
  if (c == 6) {
    b1++;
    c = 0;
  }
  if (b1 > 9) {
    b++;
    b1 = 0;
  }
  if(b1 < 0){
    b--;
    b1=9;
  }
  if (b == 6) {
    a1++;
    b = 0;
  }
  if (b<0)b=5;
  if (a1 > 9) {
    a++;
    a1 = 0;
  }
  if (a * 10 + a1 == 24) {
    a = 0;
    a1 = 0;
  }
}


