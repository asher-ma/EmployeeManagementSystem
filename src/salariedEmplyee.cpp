#include <iostream>

#include "../include/salariedEmployee.h"

SalariedEmployee::SalariedEmployee(std::string name_, int id_, double salary)
    : Employee(name_, id_), weeklySalary(salary) {}

double SalariedEmployee::calculatePay() const {
    return weeklySalary;
}

void SalariedEmployee::display() const {
    Employee::display();
    std::cout << "Type: Salaried" << std::endl;
}