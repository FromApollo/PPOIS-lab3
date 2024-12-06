#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Airline.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Flight.h"

TEST(AirlineTest, ConstructorAndGetters) {

    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    Flight flight("DL123", "New York", airplane);

    Airline airline("Delta Airlines", "USA");

    EXPECT_EQ(airline.getName(), "Delta Airlines");
    EXPECT_EQ(airline.getCountry(), "USA");
    EXPECT_EQ(airline.getFlights().size(), 0);
}

TEST(AirlineTest, AddFlight) {

    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    Flight flight("DL123", "New York", airplane);

    Airline airline("Delta Airlines", "USA");

    airline.addFlight(flight);

    EXPECT_EQ(airline.getFlights().size(), 1);
    EXPECT_EQ(airline.getFlights()[0].getFlightNumber(), "DL123");
    EXPECT_EQ(airline.getFlights()[0].getDestination(), "New York");
}

TEST(AirlineTest, AddMultipleFlights) {

    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    Flight flight1("DL123", "New York", airplane);
    Flight flight2("DL456", "Los Angeles", airplane);

    Airline airline("Delta Airlines", "USA");

    airline.addFlight(flight1);
    airline.addFlight(flight2);

    EXPECT_EQ(airline.getFlights().size(), 2);
    EXPECT_EQ(airline.getFlights()[0].getFlightNumber(), "DL123");
    EXPECT_EQ(airline.getFlights()[1].getFlightNumber(), "DL456");
    EXPECT_EQ(airline.getFlights()[1].getDestination(), "Los Angeles");
}
