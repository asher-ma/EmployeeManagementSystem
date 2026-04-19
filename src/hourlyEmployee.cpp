#include <iostream>

#include "hourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name_, int id_, double rate, double hours)
    : Employee("Hourly", name_, id_), hourlyRate(rate), hoursWorked(hours) {}

double HourlyEmployee::calculatePay() const {
    if (hoursWorked > 40){
        double basePay = hourlyRate * 40;
        double overtime = hourlyRate * 1.5 *(hoursWorked-40);
        return basePay + overtime;
    } else {
        return hourlyRate * hoursWorked;
    }
}

// void HourlyEmployee::display() const {
//     Employee::display();
//     std::cout << "Type: Hourly\nHours Worked: " << hoursWorked << std::endl;
// }