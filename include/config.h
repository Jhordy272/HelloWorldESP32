#ifndef CONFIG_H
#define CONFIG_H

#define LED_PIN 2  // Pin del LED integrado del ESP32
#define BLINK_DELAY 5000  // Retardo en milisegundos

#define WIFI_SSID "FAMILIA PENAGOS "
#define WIFI_PASSWORD "YORDY123"
#define WIFI_TIMEOUT 10000  // Tiempo máximo de espera para conexión en ms

#define IOT_HUB_HOST_NAME "mi-iothub-iaac.azure-devices.net"
#define IOT_HUB_DEVICE_ID "ESP32-1"
#define IOT_HUB_PRIMARY_KEY "1xTeQjBau067X9JFbTC5VRfEEjAhCBNZ3rwyy+lhH1Q="

#define MQTT_BUFFER_SIZE 256

#endif