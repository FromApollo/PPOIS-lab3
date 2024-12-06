#include "Gate.h"

Gate::Gate(int gateNumber)
    : gateNumber(gateNumber), isOccupied(false), assignedFlight("") {}

void Gate::assignFlight(const std::string& flightID) {
    if (!isOccupied) {
        assignedFlight = flightID;
        isOccupied = true;
    }
}

void Gate::releaseGate() {
    assignedFlight = "";
    isOccupied = false;
}

int Gate::getGateNumber() const {
    return gateNumber;
}

bool Gate::getIsOccupied() const {
    return isOccupied;
}

std::string Gate::getAssignedFlight() const {
    return assignedFlight;
}
