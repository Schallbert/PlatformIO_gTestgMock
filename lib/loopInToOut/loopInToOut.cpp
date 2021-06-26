#include "loopInToOut.h"

bool LoopInToOut::loopThrough(uint8_t inPin, uint8_t outPin)
{
    bool input = m_hal.digitalRead(inPin);

    m_hal.digitalWrite(outPin, input);
    return input;
}