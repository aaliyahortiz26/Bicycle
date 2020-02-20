//
// Created by Aaliyah Ortiz on 2/11/20.
//
#include "bicycle.h"

Bicycle :: Bicycle(int startingCadence, int startingSpeed, int startingGear) {
    cadence = startingCadence;
    speed = startingSpeed;
    gear = startingGear;
}
void Bicycle :: changeCadence(int cadenceValue) {
    cadence = cadenceValue;
}
int Bicycle :: getCadence() {
    return cadence;
}
void Bicycle :: changeGear(int gearValue) {
    gear = gearValue;
}
int Bicycle :: getGear(){
    return gear;
}
void Bicycle :: speedUp(int increment) {
    speed += increment;
}
void Bicycle :: applyBrakes(int decrement) {
    speed -= decrement;
}
int Bicycle :: getSpeed() {
    return speed;
}