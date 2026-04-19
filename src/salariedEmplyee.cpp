#include <iostream>
using namespace std;

#include "../include/salariedEmployee.h"

SalariedEmployee::SalariedEmployee(string name_, int id_, double salary)
    : Employee(name_, id_), weeklySalary(salary) {}

double SalariedEmployee::calculatePay() const {
    return weeklySalary;
}

void SalariedEmployee::display() const {
    Employee::display();
    cout << "Type: Salaried" << endl;
}