#include <arduino.h>

int led1Pin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  digitalWrite(led1Pin, HIGH);
  delay(5000);
  digitalWrite(led1Pin, LOW);
  delay(1000);
  digitalWrite(led1Pin, HIGH);
  delay(300);
  digitalWrite(led1Pin, HIGH);    
}