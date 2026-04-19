#include <iostream>

#include "salariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name_, int id_, double salary)
    : Employee("Salaried", name_, id_), weeklySalary(salary) {}

double SalariedEmployee::calculatePay() const {
    return weeklySalary;
}

void SalariedEmployee::display() const {
    Employee::display();
    std::cout << "Type: Salaried" << std::endl;
}