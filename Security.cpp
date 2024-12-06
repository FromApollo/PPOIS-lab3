#include "Security.h"

Security::Security(const std::string& checkpointName, bool isActive)
    : checkpointName(checkpointName), isActive(isActive) {}

void Security::checkPassenger(const Passenger& passenger) {
    if (isActive) {
        std::cout << "Passenger " << passenger.getName() << " has been checked at checkpoint " << checkpointName
            << ".\n";
    }
    else {
        std::cout << "Checkpoint " << checkpointName << " is not active. Cannot check passenger " << passenger.getName()
            << ".\n";
    }
}


std::string Security::getCheckpointName() const {
    return checkpointName;
}

bool Security::getIsActive() const {
    return isActive;
}
