#include "Flight.h"
#include <iostream>

Flight::Flight(const std::string& flightNumber, const std::string& destination, const Airplane& airplane)
    : flightNumber(flightNumber), destination(destination), airplane(airplane), departureTime("") {}

void Flight::scheduleFlight(const std::string& departureTime) {
    this->departureTime = departureTime;
    std::cout << "Flight " << flightNumber << " to " << destination
        << " is scheduled to depart at " << departureTime << ".\n";
}

void Flight::cancelFlight() {
    departureTime = "";
    std::cout << "Flight " << flightNumber << " to " << destination << " has been canceled.\n";
}

std::string Flight::getFlightNumber() const {
    return flightNumber;
}

std::string Flight::getDestination() const {
    return destination;
}

std::string Flight::getDepartureTime() const {
    return departureTime;
}

Airplane Flight::getAirplane() const {
    return airplane;
}
