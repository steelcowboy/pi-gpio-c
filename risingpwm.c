#include <wiringPi.h>
#include <softPwm.h>

const int ledPin = 5;
int pins[4] = {25, 50, 75, 100};

int main(void) {
    wiringPiSetupGpio();

    softPwmCreate(ledPin, 0, 100);
    for (int x = 0; x < 5; x++) {
        softPwmWrite(ledPin, pins[x]);
        delay(500);
    }
    
    return 0;
}
