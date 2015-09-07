#include <wiringPi.h>

const int ledPin = 5;
const int btnPin = 6;

void toggleLED(int led);

int curState;

int main(void) {
    wiringPiSetupGpio();
    pinMode(ledPin, OUTPUT);
    pinMode(btnPin, INPUT);

    while (1) {
        curState = digitalRead(btnPin);

        if (!(curState)) {
            toggleLED(ledPin);
        }
        delay(200);
    }
    return 0;
}

void toggleLED(int led) {
    if (digitalRead(led)) {
        digitalWrite(led, LOW);
    }
    else {
        digitalWrite(led, HIGH);
    }
}


