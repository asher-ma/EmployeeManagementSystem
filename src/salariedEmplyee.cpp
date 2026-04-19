#include <iostream>

#include "salariedEmployee.h"

// Collect name and id to pass to base class constructor with employeeType
// Collect unique parameters for current class
SalariedEmployee::SalariedEmployee(const std::string& name_, int id_, double salary)
    : Employee("Salaried", name_, id_), weeklySalary(salary) {}

// Static weekly pay
double SalariedEmployee::calculatePay() const {
    return weeklySalary;
}

// Override display to add type to base definition
// void SalariedEmployee::display() const {
//     Employee::display();
//     std::cout << "Type: Salaried" << std::endl;
// }