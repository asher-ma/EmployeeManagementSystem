#ifndef _HOURLY_EMPLOYEE_H_
#define _HOURLY_EMPLOYEE_H_

#include <string>

#include "employee.h"

class HourlyEmployee : public Employee {
    public:
        HourlyEmployee(const std::string& name_, int id_, double rate, double hours);
        void display() const override;
        double calculatePay() const override;
        
    private:
        double hourlyRate;
        double hoursWorked;
};

#endif