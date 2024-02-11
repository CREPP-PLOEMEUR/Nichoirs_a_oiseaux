#include "LED.h"

LED::LED(uint8_t pinLed) : m_pinLed {pinLed}
{

   
}

LED::~LED() {
    
}

void LED::init() {
    pinMode(m_pinLed, OUTPUT);
}


void LED::on()
{
    digitalWrite(m_pinLed, 1);
}

void LED::off()
{
    digitalWrite(m_pinLed, 0);
}

void LED::blink(uint16_t count, uint16_t highTime, uint16_t lowTime)
{
    for(uint16_t i = 0;i<count;i++)
    {
        this->on();
        delay(highTime);
        this->off();
        delay(lowTime);
    }
}