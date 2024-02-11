#include "EEPROM_Tools.h"


EEPROM_Tools::EEPROM_Tools(uint16_t eepromSize) : m_eepromSize {eepromSize} {
   
}

EEPROM_Tools::~EEPROM_Tools() {
    
}

void EEPROM_Tools::init() {

    EEPROM.begin(m_eepromSize);
}

uint8_t EEPROM_Tools::read(int address) {

  return EEPROM.read(address);
}


void EEPROM_Tools::write(int address, uint8_t value)
{
  EEPROM.write(address, value);
}


