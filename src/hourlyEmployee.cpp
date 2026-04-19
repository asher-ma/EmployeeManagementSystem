#include <iostream>

#include "hourlyEmployee.h"

// Collect name and id to pass to base class constructor with employeeType
// Collect unique parameters for current class
HourlyEmployee::HourlyEmployee(const std::string& name_, int id_, double rate, double hours)
    : Employee("Hourly", name_, id_), hourlyRate(rate), hoursWorked(hours) {}

// Calculate pay with hourlyRate and hoursWorked
// Time and a half for overtime hours (over 40)
double HourlyEmployee::calculatePay() const {
    if (hoursWorked > 40){
        double basePay = hourlyRate * 40;
        double overtime = hourlyRate * 1.5 *(hoursWorked-40);
        return basePay + overtime;
    } else {
        return hourlyRate * hoursWorked;
    }
}

// Override display to add hours worked to base definition
void HourlyEmployee::display() const {
    Employee::display();
    std::cout << "Hours Worked: " << hoursWorked << std::endl;
}