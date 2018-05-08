#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int g10 = 0;//godziny dziesiątki
int m10 = 0;//minuty dziesiątki
int s10 = 0;//sekundy dziesiątki
int g01 = 0;//godziny jednosci
int m01 = 0;//minuty jednosci
int s01 = 0;//sekundy jednosci
int g, m, s;
int key;
char napis[10];
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  key = analogRead(0);
  splus();
  keys();
  pisz();
  terminal();
  delay(1000);
  



}
void terminal() {
  g = (g10 * 10) + g01;
  m = (m10 * 10) + m01;
  s = (s10 * 10) + s01;

  sprintf(napis, "%02d:%02d:%02d", g, m, s);
  Serial.println(napis);
}
void keys() {
  if ((key >= 0) && (key < 10))
  {
    mplus();
  }
  else if ((key > 90) && (key < 110))
  {
    gplus();
  }
  else if ((key > 400) && (key < 420))
  {
    mminus();
  }
  else if ((key > 245) && (key < 265))
  {
    gminus();
  }
  if (key < 420) {
    s10 = 0;
    s01 = 0;
  }
}
void mplus() {
  m01++;
  if (m01 > 9) {
    m10++;
    m01 = 0;
  }
  if (m10 > 5) {
    m10 = 0;
    g01++;
  }
}
void gplus() {
  g01++;
  if (g01 > 9) {
    g10++;
    g01 = 0;
  }
  if ((g10 == 2) && (g01 > 3)) {
    g10 = 0;
    g01 = 0;
  }
}
void mminus() {
  m01--;
  if (m01 < 0) {
    m10--;
    m01 = 9;
    if (m10 < 0) {
      m10 = 5;
    }
  }
}
void gminus() {
  g01--;
  if (g01 < 0) {
    g10--;
    if (g10 < 0) {
      g10 = 2;
      g01 = 3;
    }
    else {
      g01 = 9;
    }

  }
}
void pisz() {
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print(g10);
  lcd.print(g01);
  lcd.print(":");
  lcd.print(m10);
  lcd.print(m01);
  lcd.print(":");
  lcd.print(s10);
  lcd.print(s01);
}
void splus() {
  s01++;
  if (s01 > 9) {
    s10++;
    s01 = 0;
  }
  if (s10 > 5) {
    s10 = 0;
    mplus();
  }

}


