#include <Servo.h>
#include <LiquidCrystal_I2C.h>

Servo servo;
LiquidCrystal_I2C lcd(0x27,16,2);

#define LED 4
#define BUZZER 3
#define pot A1
#define mq A0

void setup() {
  lcd.begin();
  Serial.begin(9600);
  servo.attach(2);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(mq, INPUT);
}

void loop() {
  int hasilpot = analogRead(pot);
  int batasukur = map (hasilpot, 0, 1023, 0, 2000);
  int gas = analogRead(mq);

  Serial.println(mq);

  if(gas >= batasukur){
    lcd.clear();
    if(batasukur <= 1000){
      lcd.setCursor(0,0);
      lcd.print("LPG:");
      lcd.setCursor(12,0);
      lcd.print(batasukur);
    }else if (batasukur >= 1001 && batasukur <= 1500){
      lcd.setCursor(0,0);
      lcd.print("Rokok:");
      lcd.setCursor(12,0);
      lcd.print(batasukur);
    }else {
      lcd.setCursor(0,0);
      lcd.print("Other:");
      lcd.setCursor(12,0);
      lcd.print(batasukur);
    }
    lcd.setCursor(0,1); //atur kursor ke kolom 0 baris 1
    lcd.print("Gas:");
    lcd.setCursor(12,1); //atur kursor ke kolom 0 baris 0
    lcd.print(gas);
    servo.write(90);
    digitalWrite(BUZZER, HIGH);
    digitalWrite(LED, HIGH);
    delay(10000);
  }else{
    lcd.clear();
    if(batasukur <= 1000){
      lcd.setCursor(0,0);
      lcd.print("LPG:");
      lcd.setCursor(12,0);
      lcd.print(batasukur);
    }else if (batasukur >= 1001 && batasukur <= 1500){
      lcd.setCursor(0,0);
      lcd.print("Rokok:");
      lcd.setCursor(12,0);
      lcd.print(batasukur);
    }else {
      lcd.setCursor(0,0);
      lcd.print("Other:");
      lcd.setCursor(12,0);
      lcd.print(batasukur);
    }
    lcd.setCursor(0,1); //atur kursor ke kolom 0 baris 1
    lcd.print("Gas:");
    lcd.setCursor(12,1); //atur kursor ke kolom 0 baris 0
    lcd.print(gas);
    servo.write(0);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(500);
  }
}
