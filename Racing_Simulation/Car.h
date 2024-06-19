#pragma once
#ifndef CAR_H
#define CAR_H
using namespace std;;

#include "RacingVehicle.h"
#include "Track.h"

class Car : public RacingVehicle {
private:
    double aerodynamics;
public:
    Car(string vehicleType, double topSpeed, double handling,string manufacturer,string model,string driverName, double aerodynamics);
    double race(Track track)override;
};

#endif