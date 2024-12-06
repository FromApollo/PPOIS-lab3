#ifndef CATERING_H
#define CATERING_H

#include <string>
#include <vector>
#include "Airplane.h"

class Catering {
private:
    std::string serviceName;
    std::vector<std::string> menuItems;
public:
    Catering(const std::string& serviceName);

    void provideService(const Airplane& airplane);

    void addMenuItem(const std::string& menuItem);

    std::string getServiceName() const;

    const std::vector<std::string>& getMenuItems() const;
};

#endif