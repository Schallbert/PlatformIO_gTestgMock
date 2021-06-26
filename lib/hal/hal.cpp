#include "hal.h"

namespace hardwareAbstraction{

bool Hal::digitalRead(uint8_t pinId) const
{
    return digitalRead(pinId);
}

void Hal::digitalWrite(uint8_t pinId, bool value) const
{
    digitalWrite(pinId, value);
}

} // hardwareAbstraction