#include <iostream>
#include "bicycle.h"

int main() {
    int slowDown; //used for user
    int goFast;
    int gearChange, cadenceChange;

    Bicycle rollingThing(0, 0, 1);
    ThreeSpeedBicycle gearThing(0); //this must check if the user is allow to change gears

    std::cout << "Cadence: " << rollingThing.getCadence() << std::endl;
    std::cout << "Speed: " << rollingThing.getSpeed() << std::endl;
    std::cout << "Gear: " << rollingThing.getGear() << "\n" << std::endl;

    std::cout << "Cadence Change: ";
    std::cin >> cadenceChange;
    std::cout << "Speed Up By: ";
    std::cin >> goFast;
    std::cout << "Switch Gear: ";
    std::cin >> gearChange;

    rollingThing.changeCadence(cadenceChange);
    rollingThing.changeGear(gearChange);
    rollingThing.speedUp(goFast);

    std::cout << "Cadence: " << rollingThing.getCadence() << std::endl;
    std::cout << "Speed: " << rollingThing.getSpeed() << std::endl;
    std::cout << "Gear: " << rollingThing.getGear() << "\n" << std::endl;

    std::cout << "Slow down by: ";
    std::cin >> slowDown;

    rollingThing.applyBrakes(slowDown);
    std::cout << "Speed: " << rollingThing.getSpeed() << std::endl;

    return 0;
}
