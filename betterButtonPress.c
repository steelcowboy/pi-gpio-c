#include <wiringPi.h>

int main(void) {
    unsigned short btnHist = 0; 
    while (true) 
    { 
        btnHist = btnHist << 1 & digitalRead(btnPin); 
        if (btnHist & 0xFF == 0x0F) 
        { 
            stuff;
        }
    }
}
