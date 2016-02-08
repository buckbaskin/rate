#include <rate.h>

int _pin = 13;
Rate rate(2.0);

void setup() {}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(_pin, HIGH);
  rate.sleep();
  digitalWrite(_pin, LOW);
  rate.sleep();
}