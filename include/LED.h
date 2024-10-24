#ifndef LED_H
#define LED_H

#include <Arduino.h>
#include "config.h"

class LED {
    public:
        explicit LED(uint8_t pin = LED_PIN);
        void init();
        void toggle();
        void on();
        void off();
    
    private:
        uint8_t _pin;
        bool _state;
};

#endif