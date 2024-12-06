#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
    std::string name;
    std::string passportNumber;
    std::string ticketNumber;
public:
    Passenger(const std::string& name, const std::string& passportNumber, const std::string& ticketNumber);

    void checkIn();

    void cancelTicket();

    std::string getName() const;

    std::string getPassportNumber() const;

    std::string getTicketNumber() const;
};

#endif