#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Airport.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Terminal.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Flight.h"

TEST(AirportTest, ConstructorAndGetters) {

    Airport airport("JFK Airport", "New York");

    EXPECT_EQ(airport.getName(), "JFK Airport");
    EXPECT_EQ(airport.getLocation(), "New York");
}

TEST(AirportTest, AddTerminalTest) {

    Terminal terminal(1, "Terminal 1", 200);

    Airport airport("JFK Airport", "New York");

    airport.addTerminal(terminal);

    EXPECT_EQ(airport.getTerminals().size(), 1);
    EXPECT_EQ(airport.getTerminals()[0].getName(), "Terminal 1");
}

TEST(AirportTest, AddFlightTest) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Flight flight("AA101", "New York", airplane);

    Airport airport("JFK Airport", "New York");

    airport.addFlight(flight);

    EXPECT_EQ(airport.getFlights().size(), 1);
    EXPECT_EQ(airport.getFlights()[0].getFlightNumber(), "AA101");
}

TEST(AirportTest, AddTerminalAndFlightTest) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Flight flight("AA101", "New York", airplane);

    Terminal terminal(1, "Terminal 1", 200);

    Airport airport("JFK Airport", "New York");

    airport.addTerminal(terminal);
    airport.addFlight(flight);

    EXPECT_EQ(airport.getTerminals().size(), 1);
    EXPECT_EQ(airport.getFlights().size(), 1);
    EXPECT_EQ(airport.getTerminals()[0].getName(), "Terminal 1");
    EXPECT_EQ(airport.getFlights()[0].getFlightNumber(), "AA101");
}

