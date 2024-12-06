#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Airplane.h"

TEST(AirplaneTest, ConstructorTest) {
    Airplane airplane("Boeing 737", 180, "Delta Airlines");

    EXPECT_EQ(airplane.getModel(), "Boeing 737");
    EXPECT_EQ(airplane.getSeatingCapacity(), 180);
    EXPECT_EQ(airplane.getAirlineName(), "Delta Airlines");
}

TEST(AirplaneTest, PerformMaintenanceTest) {
    Airplane airplane("Airbus A320", 150, "American Airlines");

    testing::internal::CaptureStdout();
    airplane.performMaintenance();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Performing maintenance on airplane model: Airbus A320") != std::string::npos);
    EXPECT_TRUE(output.find("of airline: American Airlines") != std::string::npos);
}
