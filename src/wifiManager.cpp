#include "WiFiManager.h"

WiFiManager::WiFiManager() : _connected(false), _lastCheck(0) {}

bool WiFiManager::connect() {
    Serial.print("Conectando a WiFi");
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    
    unsigned long startAttemptTime = millis();
    
    while (WiFi.status() != WL_CONNECTED && 
           millis() - startAttemptTime < WIFI_TIMEOUT) {
        Serial.print(".");
        delay(500);
    }
    
    if (WiFi.status() == WL_CONNECTED) {
        _connected = true;
        Serial.println("\nConectado al WiFi!");
        Serial.print("Dirección IP: ");
        Serial.println(WiFi.localIP());
        return true;
    } else {
        Serial.println("\nFallo al conectar al WiFi!");
        Serial.println("\n Fallo: "+WiFi.status());
        return false;
    }
}

void WiFiManager::checkConnection() {
    if (millis() - _lastCheck >= 30000) {  // Revisar cada 30 segundos
        _connected = (WiFi.status() == WL_CONNECTED);
        _lastCheck = millis();
        
        if (!_connected) {
            Serial.println("Conexión WiFi perdida. Intentando reconectar...");
            connect();
        }
    }
}

bool WiFiManager::isConnected() {
    return _connected;
}

String WiFiManager::getIP() {
    return WiFi.localIP().toString();
}