#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\WeatherSystem.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Flight.h"

TEST(WeatherSystemTest, ConstructorAndGetters) {

    WeatherSystem weatherSystem;

    EXPECT_EQ(weatherSystem.getCurrentWeather(), "Clear");
}

TEST(WeatherSystemTest, UpdateWeatherAndNotifyFlights) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Flight flight1("AA101", "New York", airplane);
    Flight flight2("AA102", "Los Angeles", airplane);

    WeatherSystem weatherSystem;

    weatherSystem.addFlight(flight1);
    weatherSystem.addFlight(flight2);

    std::stringstream output;
    std::streambuf* original = std::cout.rdbuf(output.rdbuf());  

    weatherSystem.updateWeather("Rainy");

    EXPECT_NE(output.str().find("Weather updated to: Rainy"), std::string::npos);
    EXPECT_NE(output.str().find("Notifying flights about the weather update..."), std::string::npos);
    EXPECT_NE(output.str().find("Flight AA101 has been notified about the weather change: Rainy"), std::string::npos);
    EXPECT_NE(output.str().find("Flight AA102 has been notified about the weather change: Rainy"), std::string::npos);

    std::cout.rdbuf(original);
}
