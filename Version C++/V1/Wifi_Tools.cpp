#include "WiFiType.h"
#include "Wifi_Tools.h"

Wifi_Tools::Wifi_Tools() {
   
}

Wifi_Tools::~Wifi_Tools() {
    
}

void Wifi_Tools::init() {
    // Method Wifi_Tools_Init()
}


uint8_t Wifi_Tools::status()
{
  return WiFi.status();
}

bool Wifi_Tools::connect(String ssid, String password, uint16_t timeout)
{
  uint8_t status = WiFi.begin(ssid, password);

  uint16_t timer = 0;
  while(WiFi.status()!=WL_CONNECTED || timer <=timeout)
  {
    delay(1000);
    timer  +=1000;
  }
  // delay(20000);
  // Serial.println(status);

  // Serial.print("SSID: ");
  // Serial.println(WiFi.SSID());

  // // print your WiFi shield's IP address
  // IPAddress ip = WiFi.localIP();
  // Serial.print("IP Address: ");
  // Serial.println(ip);

  // // print the received signal strength
  // long rssi = WiFi.RSSI();
  // Serial.print("Signal strength (RSSI):");
  // Serial.print(rssi);
  // Serial.println(" dBm");
  return WiFi.status();
}