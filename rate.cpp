#include <rate.h>
#include "Arduino.h"

Rate::Rate(float hz) {
    loop_hz = hz;
    millis_time = (long) 1000.0/loop_hz;
    previous_time = millis();
}

long Rate::cycleTime() {
    return millis() - previous_time;
}

long Rate::expectedCycleTime() {
    return millis_time;
}

void Rate::reset() {
    previous_time = millis();
}

bool Rate::sleep() {
    unsigned long current_time = millis();
    while(current_time - previous_time < millis_time) {
        current_time = millis();
    }
    return true;
}