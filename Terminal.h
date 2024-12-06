#ifndef TERMINAL_H
#define TERMINAL_H

#include <vector>
#include <string>
#include "Gate.h"

class Terminal {
private:
    int terminalID;
    std::string name;
    int capacity;
    std::vector<Gate> gates;
public:
    Terminal(int terminalID, const std::string& name, int capacity);

    void addGate(const Gate& gate);

    std::vector<Gate> getAvailableGates() const;

    int getTerminalID() const;

    std::string getName() const;
};

#endif