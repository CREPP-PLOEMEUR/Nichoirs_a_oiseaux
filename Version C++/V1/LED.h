#ifndef LED_HPP
#define LED_HPP

#include "Arduino.h"


class LED 
{
public:

    LED(uint8_t pinLed);
    ~LED();

    void init();

    void on();
    void off();

    void blink(uint16_t count, uint16_t highTime, uint16_t lowTime);

private:
    
    uint8_t m_pinLed;
};

#endif // LED_HPP
