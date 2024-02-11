#include "Power.h"

Power::Power() {
   
}

Power::~Power() {
    
}

void Power::init() {
   
   WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); // disable brownout detector
   
}
