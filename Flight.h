#ifndef FLIGHT_H
#define FLIGHT_H

#include "Airplane.h"
#include <string>

class Flight {
private:
    std::string flightNumber;
    std::string destination;
    std::string departureTime;
    Airplane airplane;
public:
    Flight(const std::string& flightNumber, const std::string& destination, const Airplane& airplane);

    void scheduleFlight(const std::string& departureTime);

    void cancelFlight();

    std::string getFlightNumber() const;

    std::string getDestination() const;

    std::string getDepartureTime() const;

    Airplane getAirplane() const;
};

#endif