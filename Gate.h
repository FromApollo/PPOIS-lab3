#ifndef GATE_H
#define GATE_H

#include <vector>
#include <string>

class Gate {
private:
    int gateNumber;
    bool isOccupied;
    std::string assignedFlight;
public:
    Gate(int gateNumber);

    void assignFlight(const std::string& flightID);

    void releaseGate();

    int getGateNumber() const;

    bool getIsOccupied() const;

    std::string getAssignedFlight() const;
};


#endif