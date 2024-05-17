#ifndef CONFIG_HPP
#define CONFIG_HPP

#include "LL_Config.h"

/*
   User config
*/
#define PLATEFORM ESP32_CAM



/*!
 Other settings
*/
#define PERIPHERAL_LED_PIN          GPIO_NUM_4

#define PERIPHERAL_EEPROM_SIZE      16

#define PERIPHERAL_SERIAL_BAUDRATE  9600

#define WIFI_SSID       "SFR_8A40"
#define WIFI_PASSWORD   "jvyg2qje35eeph5nst52"
#define WIFI_TIMEOUT    15000





/*!
    ########################################
    Automatic includes
    ########################################
*/
#ifdef PLATEFORM
#if PLATEFORM == ARDUINO
  #include <SoftwareSerial.h>
#endif

#if PLATEFORM == ESP12
  //#include <SoftwareSerial.h>
#endif

#if PLATEFORM == ESP32_CAM
        //#include <SoftwareSerial.h>
#endif

#endif

#endif
