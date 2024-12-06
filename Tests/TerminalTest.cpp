#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Terminal.h"

TEST(TerminalTest, ConstructorTest) {
    Terminal terminal(1, "Terminal A", 10);

    EXPECT_EQ(terminal.getTerminalID(), 1); 
    EXPECT_EQ(terminal.getName(), "Terminal A"); 
}

TEST(TerminalTest, AddGateTest) {
    Terminal terminal(1, "Terminal A", 10);
    Gate gate1(1); 
    Gate gate2(2); 

    terminal.addGate(gate1);
    terminal.addGate(gate2);

    std::vector<Gate> availableGates = terminal.getAvailableGates();

    EXPECT_EQ(availableGates.size(), 2);
    EXPECT_EQ(availableGates[0].getGateNumber(), 1);
    EXPECT_EQ(availableGates[1].getGateNumber(), 2);
}

TEST(TerminalTest, GetAvailableGatesTestWithOccupiedGates) {
    Terminal terminal(1, "Terminal A", 10);
    Gate gate1(1); 
    Gate gate2(2); 
    Gate gate3(3); 

    terminal.addGate(gate1);
    terminal.addGate(gate2);
    terminal.addGate(gate3);

    gate1.assignFlight("AA123");

    std::vector<Gate> availableGates = terminal.getAvailableGates();

   EXPECT_EQ(availableGates.size(), 3);
   EXPECT_EQ(availableGates[0].getGateNumber(), 1); 
   EXPECT_EQ(availableGates[1].getGateNumber(), 2); 
}

TEST(TerminalTest, GetTerminalIDTest) {
    Terminal terminal(1, "Terminal A", 10);
    EXPECT_EQ(terminal.getTerminalID(), 1); 
}

TEST(TerminalTest, GetNameTest) {
    Terminal terminal(1, "Terminal A", 10);
    EXPECT_EQ(terminal.getName(), "Terminal A");
}
