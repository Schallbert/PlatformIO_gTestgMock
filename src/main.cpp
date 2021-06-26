#include <Arduino.h>

#include "hal.h"
#include "loopInToOut.h"

hardwareAbstraction::Hal hal;

void setup()
{
    pinMode(1, INPUT);
    pinMode(2, OUTPUT);
}

void loop()
{
    LoopInToOut looper{hal};
    // loops the input of Pin1 through to output Pin2
    looper.loopThrough(1, 2);
}