#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <string>
#include "Flight.h"

class Airline {
private:
    std::string name;
    std::string country;
    std::vector<Flight> flights;
public:
    Airline(const std::string& name, const std::string& country);

    void addFlight(const Flight& flight);

    std::string getName() const;

    std::string getCountry() const;

    std::vector<Flight> getFlights() const;
};

#endif