#include <iostream>

#include "comissionEmployee.h"

ComissionEmployee::ComissionEmployee(std::string name_, int id_, double salary, double sales_, double rate)
    : Employee(name_, id_), baseSalary(salary), sales(sales_), comissionRate(rate) {}

double ComissionEmployee::calculatePay() const {
    return baseSalary + sales * comissionRate;
}

void ComissionEmployee::display() const {
    Employee::display();
    std::cout << "Type: Comission" << std::endl;
}