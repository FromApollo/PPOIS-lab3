#ifndef CONTROLTOWER_H
#define CONTROLTOWER_H

#include <string>
#include <vector>
#include "Runway.h"
#include "Airplane.h"

class ControlTower {
private:
    std::string towerName;
    std::vector<Runway> runways;
public:
    ControlTower(const std::string& towerName);

    void addRunway(const Runway& runway);

    void coordinateLanding(const Airplane& airplane);

    void coordinateTakeoff(const Airplane& airplane);
};

#endif