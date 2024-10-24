#include "LED.h"
#include "config.h"
#include "WiFiManager.h"

LED boardLed;
WiFiManager wifi;

void setup() {
    Serial.begin(115200);
    Serial.println("Iniciando...");
    
    boardLed.init();
    Serial.println("LED iniciado");
    
    if (wifi.connect()) {
        for(int i = 0; i < 5; i++) {
            boardLed.toggle();
            delay(100);
        }
    } else {
        for(int i = 0; i < 3; i++) {
            boardLed.toggle();
            delay(500);
        }
    }
    
}

void loop() {
    wifi.checkConnection();
    
    if (wifi.isConnected()) {
        boardLed.on();
    } else {
        boardLed.toggle();
        delay(200);
    }
}