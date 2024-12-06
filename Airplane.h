#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>

class Airplane {
private:
    std::string model;
    int seatingCapacity;
    std::string airlineName;

public:

    Airplane(const std::string& model, int seatingCapacity, const std::string& airlineName);


    void performMaintenance();

    std::string getModel() const;

    int getSeatingCapacity() const;

    std::string getAirlineName() const;
};

#endif