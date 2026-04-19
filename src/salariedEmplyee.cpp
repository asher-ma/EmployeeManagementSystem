#include <iostream>
using namespace std;

#include "../include/salariedEmployee.h"

SalariedEmployee::SalariedEmployee(string name_, int id_, double salary)
    : AbstractEmployee(name_, id_), weeklySalary(salary) {}

double SalariedEmployee::calculatePay() const {
    return weeklySalary;
}

void SalariedEmployee::display() const {
    AbstractEmployee::display();
    cout << "Type: Salaried\nWeekly Pay: " << calculatePay() << endl;
}