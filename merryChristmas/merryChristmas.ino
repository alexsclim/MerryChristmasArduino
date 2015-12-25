//Merry Christmas!
//From Alex Lim
#include <LiquidCrystal.h>  

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Merry Christmas!");
}

// the loop function runs over and over again forever
void loop() {
  lcd.display();
  patternOne();
  delay(750);
  lcd.noDisplay();
  patternTwo();
  delay(750);
}

void patternOne() {
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
}

void patternTwo() {
  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
}
