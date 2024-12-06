#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
private:
    std::string name;
    std::string role;
    double salary;
public:
    Employee(const std::string& name, const std::string& role, double salary);

    void assignTask(const std::string& task);

    std::string getName() const;

    std::string getRole() const;

    double getSalary() const;
};

#endif