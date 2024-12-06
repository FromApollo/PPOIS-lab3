#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Flight.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Airport.h"

TEST(FlightTest, ConstructorAndGetters) {

    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    Flight flight("DL123", "New York", airplane);

    EXPECT_EQ(flight.getFlightNumber(), "DL123");
    EXPECT_EQ(flight.getDestination(), "New York");
    EXPECT_EQ(flight.getDepartureTime(), "");
    EXPECT_EQ(flight.getAirplane().getModel(), "Boeing 737");
}

TEST(FlightTest, ScheduleFlightTest) {

    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    Flight flight("DL123", "New York", airplane);

    std::string departureTime = "10:30 AM";
    flight.scheduleFlight(departureTime);

    EXPECT_EQ(flight.getDepartureTime(), departureTime);
}

TEST(FlightTest, CancelFlightTest) {

    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    Flight flight("DL123", "New York", airplane);

    std::string departureTime = "10:30 AM";
    flight.scheduleFlight(departureTime);

    flight.cancelFlight();

    EXPECT_EQ(flight.getDepartureTime(), "");
}

TEST(FlightTest, FlightMessageTest) {

    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    Flight flight("DL123", "New York", airplane);

    testing::internal::CaptureStdout();
    flight.scheduleFlight("10:30 AM");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Flight DL123 to New York is scheduled to depart at 10:30 AM."), std::string::npos);

    testing::internal::CaptureStdout();
    flight.cancelFlight();
    output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Flight DL123 to New York has been canceled."), std::string::npos);
}
