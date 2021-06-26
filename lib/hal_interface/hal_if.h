#ifndef HAL_IF
#define HAL_IF

#include "arduino_types.h"

namespace hardwareAbstraction {

// Hardware Abstraction Layer Interface class
class Hal_IF
{
public:
    virtual ~Hal_IF() = default;

    virtual bool digitalRead(uint8_t pinId) const= 0;
    virtual void digitalWrite(uint8_t pinId, bool value) const = 0;
};

} // hardwareAbstraction

#endif // HAL_IF