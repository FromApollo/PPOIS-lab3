#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Gate.h"

TEST(GateTest, ConstructorTest) {
    Gate gate(1); 

    EXPECT_EQ(gate.getGateNumber(), 1);
    EXPECT_FALSE(gate.getIsOccupied()); 
    EXPECT_EQ(gate.getAssignedFlight(), "");
}

TEST(GateTest, AssignFlightTest) {
    Gate gate(1);

    gate.assignFlight("AA123");

    EXPECT_TRUE(gate.getIsOccupied()); 
    EXPECT_EQ(gate.getAssignedFlight(), "AA123");
}

TEST(GateTest, ReleaseGateTest) {
    Gate gate(1);

    gate.assignFlight("AA123");

    gate.releaseGate();

    EXPECT_FALSE(gate.getIsOccupied());
    EXPECT_EQ(gate.getAssignedFlight(), "");  
}

TEST(GateTest, GetGateNumberTest) {
    Gate gate(1);
    EXPECT_EQ(gate.getGateNumber(), 1); 
}

TEST(GateTest, GetIsOccupiedTest) {
    Gate gate(1);

    EXPECT_FALSE(gate.getIsOccupied());

    gate.assignFlight("AA123");

    EXPECT_TRUE(gate.getIsOccupied());
}

TEST(GateTest, GetAssignedFlightTest) {
    Gate gate(1);

    EXPECT_EQ(gate.getAssignedFlight(), "");

    gate.assignFlight("AA123");

    EXPECT_EQ(gate.getAssignedFlight(), "AA123");
}
