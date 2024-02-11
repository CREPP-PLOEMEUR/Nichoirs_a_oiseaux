#ifndef WIFI_TOOLS_H
#define WIFI_TOOLS_H

#include <WiFi.h>
#include <WiFiClient.h> 

#include "Arduino.h"

class Wifi_Tools 
{
public:
    Wifi_Tools();
    ~Wifi_Tools();

    void init();
    /*!
      Return true if connected
    */
    bool connect(String ssid, String password, uint16_t timeout);
    uint8_t status();
    bool isConnected();

private:
    // Déclarations des membres privés ici
};

#endif // Wifi_H
