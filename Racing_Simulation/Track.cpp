#include "Track.h"
#include <stdexcept>
using namespace std;;
Track::Track(int length, double topSpeedPct, double highHandlingPct, double mediumHandlingPct, double cruiseSpeedPct)
    : length(length), topSpeedPct(topSpeedPct), highHandlingPct(highHandlingPct), mediumHandlingPct(mediumHandlingPct), cruiseSpeedPct(cruiseSpeedPct)
{
    double sum = topSpeedPct + highHandlingPct + mediumHandlingPct + cruiseSpeedPct;
    if (sum != 1.0) {
        throw invalid_argument("Percentages do not add up to 1.0");
    }
}

int Track::getLength(){
    return length;
}

double Track::getTopSpeedPct(){
    return topSpeedPct;
}

double Track::getHighHandlingPct(){
    return highHandlingPct;
}

double Track::getMediumHandlingPct(){
    return mediumHandlingPct;
}

double Track::getCruiseSpeedPct(){
    return cruiseSpeedPct;
}
