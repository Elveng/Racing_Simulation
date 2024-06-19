#pragma once
#ifndef RACING_VEHICLE_H
#define RACING_VEHICLE_H
using namespace std;;
#include <string>

class Track;
class RacingVehicle {
protected:
    string vehicleType;
    double topSpeed;
    double handling;
    string manufacturer;
    string model;
    string driverName;
public:
    RacingVehicle(string vehicleType, double topSpeed, double handling,string manufacturer,string model,string driverName);
    virtual ~RacingVehicle();
    void display();
    virtual double race(Track track);
    void tuning(double topSpeedPercent = 0, double handlingPercent = 0);
};

#endif
