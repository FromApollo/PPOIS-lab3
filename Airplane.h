#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>

class Airplane {
private:
    std::string model;          // Модель самолета
    int seatingCapacity;        // Количество мест
    std::string airlineName;    // Название авиакомпании

public:
    // Конструктор
    Airplane(const std::string& model, int seatingCapacity, const std::string& airlineName);

    // Методы
    void performMaintenance();  // Выполнить техническое обслуживание
    std::string getModel() const;       // Получить модель самолета
    int getSeatingCapacity() const;     // Получить вместимость
    std::string getAirlineName() const; // Получить название авиакомпании
};

#endif