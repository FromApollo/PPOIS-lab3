#ifndef SECURITY_H
#define SECURITY_H

#include <string>
#include <iostream>
#include "Passenger.h"

class Security {
private:
    std::string checkpointName;
    bool isActive;
public:
    Security(const std::string& checkpointName, bool isActive);

    void checkPassenger(const Passenger& passenger);

    std::string getCheckpointName() const;

    bool getIsActive() const;
};

#endif