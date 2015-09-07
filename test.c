#include <wiringPi.h>

const int ledpin = 5;
const int btnpin = 6;

int main(void) {	
    wiringPiSetupGpio();
    pinMode(ledpin, OUTPUT);
    pinMode(btnpin, INPUT);

    while (1) {
	if (digitalRead(btnpin)) {
		digitalWrite(ledpin, LOW);
	}
	else {
		digitalWrite(ledpin, HIGH);
	}
    }

	return 0;
}
