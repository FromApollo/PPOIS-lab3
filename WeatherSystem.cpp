#include "WeatherSystem.h"
#include <iostream>

WeatherSystem::WeatherSystem() : currentWeather("Clear") {}

void WeatherSystem::updateWeather(const std::string& weather) {
    currentWeather = weather;
    std::cout << "Weather updated to: " << currentWeather << "\n";
    notifyFlights();
}

void WeatherSystem::notifyFlights() {
    std::cout << "Notifying flights about the weather update...\n";
    for (const auto& flight : flights) {
        std::cout << "Flight " << flight.getFlightNumber()
            << " has been notified about the weather change: "
            << currentWeather << ".\n";
    }
}

void WeatherSystem::addFlight(const Flight& flight) {
    flights.push_back(flight);
}

std::string WeatherSystem::getCurrentWeather() const {
    return currentWeather;
}
