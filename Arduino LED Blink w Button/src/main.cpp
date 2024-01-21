#include <Arduino.h>
#define ledRed 2
#define ledYl 3
#define button 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);
  pinMode(ledRed, OUTPUT);
  pinMode(ledYl,OUTPUT);
}

void speedMode(int option){
  if (option==1){
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYl, HIGH);
  delay(1000);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYl, LOW);
  delay(1000);
  }else{
  digitalWrite(ledRed, HIGH);
  delay(1000);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYl, HIGH);
  delay(1000);
  digitalWrite(ledYl, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int isButtonPressed=digitalRead(button);
  if (isButtonPressed==0) {
    speedMode(1);
  }else{
    speedMode(0);
  }
}
