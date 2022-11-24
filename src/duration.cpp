/*
 * Fibonacci numbers defined recursively
 */
#include "duration.h"

#include <iostream>
#include <assert.h>

// File for sandboxing and trying out code

int Duration::getDuration() {
    return time;
}

void Duration::setAlarm(int t) {
    assert(t > time);
    alarm = t;
    alarmHasBeenSet = true;
}

bool Duration::checkAndUpdateAlarm() {
    if (time > alarm && alarmHasBeenSet) {
        alarm = 0;
        alarmHasBeenSet = false;
        return true;
    } else {
        return false;
    }
}

bool Duration::tick() {
    time++;
    return checkAndUpdateAlarm();
}

bool Duration::tick(int dt) {
    assert(dt > 0);
    time += dt;
    return checkAndUpdateAlarm();
}

Duration::Duration() {
    time = 0;
    alarm = 0;
    alarmHasBeenSet = false;
}

Duration::Duration(int t) {
    assert(t > 0);
    time = t;
    alarm = 0;
    alarmHasBeenSet = false;
}