#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

#include <Arduino.h>
#include <WiFi.h>
#include "config.h"

class WiFiManager {
    public:
        WiFiManager();
        bool connect();
        void checkConnection();
        bool isConnected();
        String getIP();
        
    private:
        bool _connected;
        unsigned long _lastCheck;
};

#endif