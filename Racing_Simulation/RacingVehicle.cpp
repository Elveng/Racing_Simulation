#include "RacingVehicle.h"
#include "Track.h"
#include <iostream>
using namespace std;;
RacingVehicle::RacingVehicle(string vehicleType, double topSpeed, double handling,string manufacturer,string model,string driverName)
    : vehicleType(vehicleType), topSpeed(topSpeed), handling(handling), manufacturer(manufacturer), model(model), driverName(driverName)
{}

RacingVehicle::~RacingVehicle(){}

void RacingVehicle::display(){
    cout << "Vehicle Type: " << vehicleType << endl;
    cout << "Top Speed: " << topSpeed << " mph" << endl;
    cout << "Handling: " << handling << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Model: " << model << endl;
    cout << "Driver Name: " << driverName << endl;
}

double RacingVehicle::race(Track track){
    double distance = track.getLength();
    double time = distance / topSpeed;
    time += (track.getHighHandlingPct() + track.getMediumHandlingPct()) * handling / 100;
    return time;
}

void RacingVehicle::tuning(double topSpeedPercent, double handlingPercent){
    topSpeed *= (1 + topSpeedPercent / 100);
    handling *= (1 + handlingPercent / 100);
    if (handling > 1.0) {
        handling = 1.0;
    }
}
