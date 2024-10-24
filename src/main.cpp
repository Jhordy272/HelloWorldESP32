#include "LED.h"
#include "config.h"

LED boardLed;

void setup() {
    Serial.begin(115200);
    boardLed.init();
}

void loop() {
    boardLed.toggle();
    delay(BLINK_DELAY);
}