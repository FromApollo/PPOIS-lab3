#include "Airport.h"
#include <iostream>

Airport::Airport(const std::string& name, const std::string& location)
    : name(name), location(location) {}

void Airport::addTerminal(const Terminal& terminal) {
    terminals.push_back(terminal);
    std::cout << "Terminal " << terminal.getName() << " has been added to airport " << name << ".\n";
}

void Airport::addFlight(const Flight& flight) {
    flights.push_back(flight);
    std::cout << "Flight " << flight.getFlightNumber() << " has been added to airport " << name << ".\n";
}


std::string Airport::getName() const {
    return name;
}

std::string Airport::getLocation() const {
    return location;
}

std::vector<Terminal> Airport::getTerminals() const {
    return terminals;
}

std::vector<Flight> Airport::getFlights() const {
    return flights;
}
