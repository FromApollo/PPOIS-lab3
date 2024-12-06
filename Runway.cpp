#include "Runway.h"
#include <iostream>

Runway::Runway(int runwayID, bool isAvailable)
    : runwayID(runwayID), isAvailable(isAvailable) {}

void Runway::assignAirplane(const Airplane& airplane) {
    if (isAvailable) {
        isAvailable = false;
        std::cout << "Airplane " << airplane.getModel() << " from airline " << airplane.getAirlineName()
            << " has been assigned to runway " << runwayID << ".\n";
    }
    else {
        std::cout << "Runway " << runwayID << " is not available for takeoff.\n";
    }
}


int Runway::getRunwayID() const {
    return runwayID;
}

bool Runway::getIsAvailable() const {
    return isAvailable;
}
