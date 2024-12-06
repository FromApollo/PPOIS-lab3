#ifndef RUNWAY_H
#define RUNWAY_H

#include <string>
#include "Airplane.h"

class Runway {
private:
    int runwayID;
    bool isAvailable;
public:
    Runway(int runwayID, bool isAvailable);

    void assignAirplane(const Airplane& airplane);

    int getRunwayID() const;

    bool getIsAvailable() const;
};

#endif