#include <iostream>
using namespace std;

#include "../include/comissionEmployee.h"

ComissionEmployee::ComissionEmployee(string name_, int id_, double salary, double sales_, double rate)
    : Employee(name_, id_), baseSalary(salary), sales(sales_), comissionRate(rate) {}

double ComissionEmployee::calculatePay() const {
    return baseSalary + sales * comissionRate;
}

void ComissionEmployee::display() const {
    Employee::display();
    cout << "Type: Comission\nWeekly Pay: " << calculatePay() << endl;
}