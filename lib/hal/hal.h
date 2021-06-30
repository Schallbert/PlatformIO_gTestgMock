#ifndef HAL_H
#define HAL_H

#include "hal_if.h"

namespace hardwareAbstraction{

class Hal : public Hal_IF
{
public:
    Hal() = default;
    ~Hal() = default;

    bool digitalRead(uint8_t pinId) const override;
    void digitalWrite(uint8_t pinId, bool value) const override;
};

} // hardwareAbstraction

#endif // HAL_H