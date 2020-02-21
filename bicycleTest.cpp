//
// Created by Aaliyah Ortiz on 2/20/20.
//

#include "bicycle.h"

ThreeSpeedBicycle ::ThreeSpeedBicycle(int changingGear) {
    gear = changingGear;
}
void ThreeSpeedBicycle ::changeGear(int gearValue) {
    gear = gearValue;
}
int ThreeSpeedBicycle ::getGearValue() {
    return gear;
}