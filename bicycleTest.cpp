//
// Created by Aaliyah Ortiz on 2/20/20.
//

//this must be able to check if the user is able to change gears

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