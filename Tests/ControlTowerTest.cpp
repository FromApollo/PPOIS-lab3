#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\ControlTower.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Airplane.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Runway.h"

class ControlTowerTest : public ::testing::Test {
protected:
    ControlTower tower{ "Main Tower" };
    Airplane airplane1{ "Boeing 737", 180, "Airline A" };
    Airplane airplane2{ "Airbus A320", 150, "Airline B" };
    Runway runway1{ 1, true }; 
    Runway runway2{ 2, false }; 

    void SetUp() override {
        tower.addRunway(runway1);
        tower.addRunway(runway2);
    }
};

TEST_F(ControlTowerTest, TestCoordinateLanding) {
    testing::internal::CaptureStdout();
    tower.coordinateLanding(airplane1);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_NE(output.find("Control Tower Main Tower is coordinating the landing of airplane Boeing 737 from airline Airline A."), std::string::npos);
    ASSERT_NE(output.find("is coordinating the landing of airplane Boeing 737"), std::string::npos);
}

TEST_F(ControlTowerTest, TestCoordinateTakeoff) {
    testing::internal::CaptureStdout();
    tower.coordinateTakeoff(airplane1);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_NE(output.find("Control Tower Main Tower is coordinating the takeoff of airplane Boeing 737 from airline Airline A."), std::string::npos);
}

TEST_F(ControlTowerTest, TestNoAvailableRunwaysForLanding) {

    tower.coordinateLanding(airplane1);
    tower.coordinateLanding(airplane2);

    testing::internal::CaptureStdout();
    tower.coordinateLanding(airplane1);  
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_NE(output.find("No available runways for landing."), std::string::npos);
}

TEST_F(ControlTowerTest, TestLandingWhenRunwayIsFree) {

    tower.coordinateLanding(airplane1);
    testing::internal::CaptureStdout();
    tower.coordinateLanding(airplane2); 
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_NE(output.find("No available runways for landing."), std::string::npos);
}

TEST_F(ControlTowerTest, TestAddRunway) {
    Runway runway3{ 3, true };
    tower.addRunway(runway3);

    tower.coordinateLanding(airplane1);
    testing::internal::CaptureStdout();
    tower.coordinateLanding(airplane2);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output.find("No available runways for landing."), std::string::npos);
}
