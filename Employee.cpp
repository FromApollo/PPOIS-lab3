#include "Employee.h"

Employee::Employee(const std::string& name, const std::string& role, double salary)
    : name(name), role(role), salary(salary) {}

void Employee::assignTask(const std::string& task) {
    std::cout << "Task \"" << task << "\" has been assigned to " << name << " (" << role << ").\n";
}


std::string Employee::getName() const {
    return name;
}

std::string Employee::getRole() const {
    return role;
}

double Employee::getSalary() const {
    return salary;
}
