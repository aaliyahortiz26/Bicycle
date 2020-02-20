#include <iostream>
#include "bicycle.h"

int main() {
    Bicycle rollingThing(0, 0, 1);

    std::cout << "Cadence: " << rollingThing.getCadence() << std::endl;
    std::cout << "Speed: " << rollingThing.getSpeed() << std::endl;
    std::cout << "Gear: " << rollingThing.getGear() << std::endl;


    return 0;
}
