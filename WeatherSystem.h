#ifndef WEATHERSYSTEM_H
#define WEATHERSYSTEM_H

#include <string>
#include <vector>
#include "Flight.h"

class WeatherSystem {
private:
    std::string currentWeather;
    std::vector<Flight> flights;
public:
    WeatherSystem();

    void updateWeather(const std::string& weather);

    void notifyFlights();

    void addFlight(const Flight& flight);

    std::string getCurrentWeather() const;
};

#endif