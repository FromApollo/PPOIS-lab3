#include "ControlTower.h"
#include <iostream>

ControlTower::ControlTower(const std::string& towerName)
    : towerName(towerName) {}

void ControlTower::addRunway(const Runway& runway) {
    runways.push_back(runway);
}

void ControlTower::coordinateLanding(const Airplane& airplane) {
    std::cout << "Control Tower " << towerName << " is coordinating the landing of airplane "
        << airplane.getModel() << " from airline " << airplane.getAirlineName() << ".\n";

    for (auto& runway : runways) {
        if (runway.getIsAvailable()) {
            runway.assignAirplane(airplane);
            return;
        }
    }

    std::cout << "No available runways for landing.\n";
}

void ControlTower::coordinateTakeoff(const Airplane& airplane) {
    std::cout << "Control Tower " << towerName << " is coordinating the takeoff of airplane "
        << airplane.getModel() << " from airline " << airplane.getAirlineName() << ".\n";

    for (auto& runway : runways) {
        if (runway.getIsAvailable()) {
            runway.assignAirplane(airplane);
            return;
        }
    }

    std::cout << "No available runways for takeoff.\n";
}
