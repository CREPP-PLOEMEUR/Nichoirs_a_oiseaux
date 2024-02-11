#ifndef EEPROM_TOOLS_H
#define EEPROM_TOOLS_H

#include <EEPROM.h>


class EEPROM_Tools 
{
public:
    EEPROM_Tools(uint16_t eepromSize);
    ~EEPROM_Tools();

    void init();

    uint8_t read(int address);
    void write(int address, uint8_t value);

private:
    uint16_t m_eepromSize;
};


#endif // EEPROM_H
