#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     200ms

int c = 0;

int main()
{
    // Initialise the digital pin LED1 as an output
#ifdef LED1
    DigitalOut led(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);
#else
    bool led,  led2, led3;
#endif

    while (true) {
        led = !led;
        led2 = !led2;
        led3 = !led3;
        c = c + 1;
        ThisThread::sleep_for(BLINKING_RATE);
        if (c == 9) {
            break;
        }
    }
    led = true;
    led2 = false;
    led3 = false;

}
