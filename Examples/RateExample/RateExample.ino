#include <rate.h>

int _pin = 13;
Rate * rate;

void setup() {
  // put your setup code here, to run once:
  rate = new Rate(2.0);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(_pin, HIGH);
  (*rate).sleep();
  digitalWrite(_pin, LOW);
  (*rate).sleep();
}