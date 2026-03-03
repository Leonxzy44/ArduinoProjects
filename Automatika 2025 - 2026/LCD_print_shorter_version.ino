#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2) ;

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0; 
int reply;

void setup() {

  lcd.begin(16, 2) ;
  pinMode(switchPin, INPUT);
  lcd.print("Temperature: 26") ;
  lcd.print("Humidity: 24") ;


  lcd.setCursor(0, 1) ;
  lcd.print("");

}

void loop() {

  switchState = digitalRead(switchPin);
  if (switchState == LOW) {
    reply = random(8);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("26.00");
    lcd.setCursor(0, 1);



   }

 }
