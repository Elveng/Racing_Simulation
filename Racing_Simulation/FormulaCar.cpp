#include "FormulaCar.h"
using namespace std;;
FormulaCar::FormulaCar(string vehicleType, double topSpeed, double handling,string manufacturer,string model,string driverName, double aerodynamics)
    : RacingVehicle(vehicleType, topSpeed, handling, manufacturer, model, driverName), aerodynamics(aerodynamics)
{}

double FormulaCar::race(Track track){
    double topSpeedTime = track.getLength() * track.getTopSpeedPct() / (topSpeed + aerodynamics * 0.3);
    double highHandlingTime;
    double mediumHandlingTime;
    double cruiseSpeedTime = track.getLength() * track.getCruiseSpeedPct() / (topSpeed + aerodynamics * 0.3 / 2);
    if (handling >= 0.8) {
        highHandlingTime = track.getLength() * track.getHighHandlingPct() / (topSpeed + aerodynamics * 0.3);
    }
    else {
        highHandlingTime = track.getLength() * track.getHighHandlingPct() / ((topSpeed + aerodynamics * 0.3) * 0.8);
    }

    if (handling >= 0.6) {
        mediumHandlingTime = track.getLength() * track.getMediumHandlingPct() / (topSpeed + aerodynamics * 0.3);
    }
    else {
        mediumHandlingTime = track.getLength() * track.getMediumHandlingPct() / ((topSpeed + aerodynamics * 0.3) * 0.9);
    }


    double totalTime = cruiseSpeedTime + mediumHandlingTime + highHandlingTime + topSpeedTime;
    return totalTime;
}
