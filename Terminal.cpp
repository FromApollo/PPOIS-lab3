#include "Terminal.h"
#include <iostream>

Terminal::Terminal(int terminalID, const std::string& name, int capacity)
    : terminalID(terminalID), name(name), capacity(capacity) {}

void Terminal::addGate(const Gate& gate) {
    gates.push_back(gate);
}

std::vector<Gate> Terminal::getAvailableGates() const {
    std::vector<Gate> availableGates;
    for (const auto& gate : gates) {
        if (!gate.getIsOccupied()) {
            availableGates.push_back(gate);
        }
    }
    return availableGates;
}

int Terminal::getTerminalID() const {
    return terminalID;
}

std::string Terminal::getName() const {
    return name;
}
