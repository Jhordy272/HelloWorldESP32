#include "LED.h"

LED::LED(uint8_t pin) : _pin(pin), _state(false) {}

void LED::init() {
    pinMode(_pin, OUTPUT);
    off();
}

void LED::toggle() {
    _state = !_state;
    digitalWrite(_pin, _state);
}

void LED::on() {
    _state = true;
    digitalWrite(_pin, HIGH);
}

void LED::off() {
    _state = false;
    digitalWrite(_pin, LOW);
}