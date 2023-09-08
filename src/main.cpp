#include <arduino.h>

int led1Pin = 9;
int led2Pin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, LOW);
  delay(2000);
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, HIGH);
  delay(2000);
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  delay(300);
  digitalWrite(led1Pin, HIGH);    
  digitalWrite(led2Pin, HIGH);
}