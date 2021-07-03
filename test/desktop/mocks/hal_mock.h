#ifndef HAL_MOCK_H
#define HAL_MOCK_H

#include "gmock/gmock.h"

#include "../lib/hal_if/hal_if.h"

class Hal_mock : public hardwareAbstraction::Hal_IF
{
public:
    MOCK_METHOD(bool, digitalRead, (uint8_t pinId), (const, override));
    MOCK_METHOD(void, digitalWrite, (uint8_t pinId, bool value), (const, override));
};

#endif // HAL_MOCK_H