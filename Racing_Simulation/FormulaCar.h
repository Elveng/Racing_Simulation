#pragma once
#ifndef FORMULACAR_H
#define FORMULACAR_H
using namespace std;;

#include "RacingVehicle.h"
#include "Track.h"

class FormulaCar : public RacingVehicle {
private:
    double aerodynamics;
public:
    FormulaCar(string vehicleType, double topSpeed, double handling,string manufacturer,string model,string driverName, double aerodynamics);
    double race(Track track) override;
};

#endif