#include <iostream>
using namespace std;

#include "../include/hourlyEmployee.h"

HourlyEmployee::HourlyEmployee(string name_, int id_, double rate, double hours)
    : AbstractEmployee(name_, id_), hourlyRate(rate), hoursWorked(hours) {}

double HourlyEmployee::calculatePay() const {
    if (hoursWorked > 40){
        return hourlyRate * hoursWorked * 1.5;
    } else {
        return hourlyRate * hoursWorked;
    }
}

void HourlyEmployee::display() const {
    AbstractEmployee::display();
    cout << "Type: Hourly\nWeekly Pay: " << calculatePay() << endl;
}