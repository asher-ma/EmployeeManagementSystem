#include <iostream>

#include "comissionEmployee.h"

// Collect name and id to pass to base class constructor with employeeType
// Collect unique parameters for current class
ComissionEmployee::ComissionEmployee(const std::string& name_, int id_, double salary, double sales_, double rate)
    : Employee("Comission", name_, id_), baseSalary(salary), sales(sales_), comissionRate(rate) {}

// Calculate pay by adding baseSalary to flat comissionRate for each sale
double ComissionEmployee::calculatePay() const {
    return baseSalary + sales * comissionRate;
}

// Override display to add type to base definition
// void ComissionEmployee::display() const {
//     Employee::display();
//     std::cout << "Type: Comission" << std::endl;
// }