#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Runway.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Airplane.h"

TEST(RunwayTest, ConstructorAndGetters) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Runway runway(1, true);

    EXPECT_EQ(runway.getRunwayID(), 1);
    EXPECT_TRUE(runway.getIsAvailable());
}

TEST(RunwayTest, AssignAirplaneAvailableTest) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Runway runway(1, true);

    std::stringstream output;
    std::streambuf* original = std::cout.rdbuf(output.rdbuf());  

    runway.assignAirplane(airplane);

    EXPECT_NE(output.str().find("Airplane Boeing 737 from airline Airline A has been assigned to runway 1."), std::string::npos);

    std::cout.rdbuf(original);
}

TEST(RunwayTest, AssignAirplaneUnavailableTest) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Runway runway(1, false);

    std::stringstream output;
    std::streambuf* original = std::cout.rdbuf(output.rdbuf());  

    runway.assignAirplane(airplane);

    EXPECT_NE(output.str().find("Runway 1 is not available for takeoff."), std::string::npos);

    std::cout.rdbuf(original);
}
