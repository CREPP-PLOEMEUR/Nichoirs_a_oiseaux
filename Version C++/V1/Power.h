#ifndef POWER_H
#define POWER_H

#include "soc/soc.h"           // Disable brownout problems
#include "soc/rtc_cntl_reg.h"  // Disable brownout problems
#include "driver/rtc_io.h"      //Low Power module

class Power {
public:
    Power();
    ~Power();
    void init();

    void sleep();
    void wakeUp();

private:
    // Déclarations des membres privés ici
};

#endif // POWER_H
