#include "Car.h"
#include <cmath>
using namespace std;;

Car::Car(string vehicleType, double topSpeed, double handling,string manufacturer,string model,string driverName, double aerodynamics)
    : RacingVehicle(vehicleType, topSpeed, handling, manufacturer, model, driverName), aerodynamics(aerodynamics)
{}


double Car::race(Track track){
    double topSpeedTime = track.getLength() * track.getTopSpeedPct() / (topSpeed + aerodynamics * 0.1);
    double highHandlingTime;
    double mediumHandlingTime;
    double cruiseSpeedTime = track.getLength() * track.getCruiseSpeedPct() / (topSpeed / 2);
    if (handling >= 0.8) {
        highHandlingTime = track.getLength() * track.getHighHandlingPct() / (topSpeed + aerodynamics * 0.1);
    }
    else {
        highHandlingTime = track.getLength() * track.getHighHandlingPct() / ((topSpeed + aerodynamics * 0.1)* 0.8);
    }
    
    if (handling >= 0.6) {
        mediumHandlingTime = track.getLength() * track.getMediumHandlingPct() / (topSpeed + aerodynamics * 0.1);
    }
    else {
        mediumHandlingTime = track.getLength() * track.getMediumHandlingPct() / ((topSpeed + aerodynamics * 0.1) * 0.9);
    }
    

    double totalTime = cruiseSpeedTime+ mediumHandlingTime+ highHandlingTime+ topSpeedTime;
    return totalTime;
}
