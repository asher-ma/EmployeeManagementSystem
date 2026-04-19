#include <iostream>
using namespace std;

#include "../include/hourlyEmployee.h"

HourlyEmployee::HourlyEmployee(string name_, int id_, double rate, double hours)
    : Employee(name_, id_), hourlyRate(rate), hoursWorked(hours) {}

double HourlyEmployee::calculatePay() const {
    if (hoursWorked > 40){
        double basePay = hourlyRate * 40;
        double overtime = hourlyRate * 1.5 *(hoursWorked-40);
        return basePay + overtime;
    } else {
        return hourlyRate * hoursWorked;
    }
}

void HourlyEmployee::display() const {
    Employee::display();
    cout << "Type: Hourly" << endl;
}