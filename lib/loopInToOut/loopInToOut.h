#ifndef LOOPINTOOUT_H
#define LOOPINTOOUT_H

#include "hal_if.h"

class LoopInToOut
{
public:
    LoopInToOut(hardwareAbstraction::Hal_IF& hal): m_hal(hal){};
    ~LoopInToOut() = default;

    bool loopThrough(uint8_t inPin, uint8_t outPin);

private:
    hardwareAbstraction::Hal_IF& m_hal;
};

#endif // LOOPINTOOUT_H