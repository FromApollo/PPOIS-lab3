#ifndef AIRPORT_H
#define AIRPORT_H

#include <vector>
#include <string>
#include "Terminal.h"
#include "Flight.h"

class Airport {
private:
    std::string name;
    std::string location;
    std::vector<Terminal> terminals;
    std::vector<Flight> flights;
public:
    Airport(const std::string& name, const std::string& location);

    void addTerminal(const Terminal& terminal);

    void addFlight(const Flight& flight);

    std::string getName() const;

    std::string getLocation() const;

    std::vector<Terminal> getTerminals() const;

    std::vector<Flight> getFlights() const;
};

#endif