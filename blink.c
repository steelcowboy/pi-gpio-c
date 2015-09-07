#include <wiringPi.h>

const int ledPin1 = 5;

void blinkLed(int pin);

int main(void) {
    wiringPiSetupGpio();

    pinMode(ledPin1, OUTPUT);
    
    while (1) {
        blinkLed(ledPin1);
        delay(500);
    }
    return 0;
}

void blinkLed(int pin) {
    digitalWrite(pin, HIGH);
    delay(50);
    digitalWrite(pin, LOW);
}
