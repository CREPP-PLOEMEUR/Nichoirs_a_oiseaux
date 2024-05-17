
#include "Config.h"
#include "EEPROM_Tools.h" 
#include "LED.h"
#include "Wifi_Tools.h"


LED led(PERIPHERAL_LED_PIN);
EEPROM_Tools eeprom(PERIPHERAL_EEPROM_SIZE);
Wifi_Tools wifi;

void setup() {

  Serial.begin(PERIPHERAL_SERIAL_BAUDRATE);

  /*!
    Init all device
   */
  led.init();
  eeprom.init();
  wifi.init();


  eeprom



  /*!
    Unit tests
  */
 led.blink(10,20,20);

  
  eeprom.write(0, 100);
  delay(100);
  Serial.println(eeprom.read(0));



  wifi.connect(WIFI_SSID, WIFI_PASSWORD, WIFI_TIMEOUT);
  Serial.println(wifi.status());

}

void loop() {
  
}
