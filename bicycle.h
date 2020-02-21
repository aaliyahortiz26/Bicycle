//
// Created by Aaliyah Ortiz on 2/11/20.
//

#ifndef BICYCLE_BICYCLE_H
#define BICYCLE_BICYCLE_H

class Bicycle {
private:
    int cadence;
    int speed;
    int gear;

public:
    Bicycle(int startingCadence, int startingSpeed, int startingGear);
    void changeCadence(int cadenceValue);
    int getCadence();
    void changeGear(int gearValue);
    int getGear();
    void speedUp(int increment);
    int getSpeed();
    void applyBrakes(int decrement);
};

class ThreeSpeedBicycle {
public:
    int gear;

public:
    ThreeSpeedBicycle(int changingGear);
    void changeGear(int gearValue);
    int getGearValue();

};

#endif //BICYCLE_BICYCLE_H
