#include <wiringPi.h>

const int ledPin = 5;

int main(void) {
    wiringPiSetupGpio();
    pinMode(ledPin, OUTPUT);

    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    return 0;
}
