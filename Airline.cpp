#include "Airline.h"

Airline::Airline(const std::string& name, const std::string& country)
    : name(name), country(country) {}

void Airline::addFlight(const Flight& flight) {
    flights.push_back(flight);
}

std::string Airline::getName() const {
    return name;
}

std::string Airline::getCountry() const {
    return country;
}

std::vector <Flight> Airline::getFlights() const {
    return flights;
}
