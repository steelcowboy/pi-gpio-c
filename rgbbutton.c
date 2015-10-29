#include <wiringPi.h>

const int ledPins[3] = { 5, 6, 7 };
const int btnPin = 13;

void cycleLED();

int curState;

int main(void) {
    wiringPiSetupGpio();
    for (int x = 0; x < 3; x++) {
        pinMode(ledPins[x], OUTPUT);
    }
    pinMode(btnPin, INPUT);

    while (1) {
        curState = digitalRead(btnPin);

        if (!(curState)) {
            cycleLED();
        }
        delay(200);
    }
    return 0;
}

void cycleLED() {
    static int i = 0;
    i = i % 3;
    digitalWrite(ledPins[i], LOW);
    i++;
    i = i % 3;
    digitalWrite(ledPins[i], HIGH);
}


