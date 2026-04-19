#include <iostream>
using namespace std;

#include "../include/salariedEmployee.h"

SalariedEmployee::SalariedEmployee(string n, int i, double s) : AbstractEmployee(n, i), weeklySalary(s) {}

double SalariedEmployee::calculatePay() const {
    return weeklySalary;
}

void SalariedEmployee::display() const {
    AbstractEmployee::display();
    cout << "Type: Salaried\nWeekly Pay: " << calculatePay() << endl;
}