#ifndef _HOURLY_EMPLOYEE_H_
#define _HOURLY_EMPLOYEE_H_

#include <string>
#include <iostream>
using namespace std;

#include "employee.h"

class HourlyEmployee : public Employee {
    public:
        HourlyEmployee(string n, int i, double rate, double hours);
        void display() const override;
        
    private:
        double hourlyRate;
        double hoursWorked;
        double calculatePay() const override;
};

#endif