#ifndef BAGGAGE_H
#define BAGGAGE_H

#include <string>
#include "Passenger.h"

class Baggage {
private:
    int weight;
    std::string ownerName;
public:
    Baggage(int weight, const std::string& ownerName);

    void tagBaggage(const Passenger& passenger);

    void removeTag();

    int getWeight() const;

    std::string getOwnerName() const;
};

#endif