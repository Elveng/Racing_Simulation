#pragma once
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
using namespace std;;

#include "RacingVehicle.h"
#include "Track.h"

class Motorcycle : public RacingVehicle {
private:
    double aerodynamics;
public:
    Motorcycle(string vehicleType, double topSpeed, double handling,string manufacturer,string model,string driverName, double aerodynamics);
    double race(Track track)override;
};

#endif