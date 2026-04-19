#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_

#include <string>

#include "employee.h"

class SalariedEmployee : public Employee {
    public:
        // Collect name and id for base class
        // and unique parameters for current class
        SalariedEmployee(const std::string& name_, int id_, double salary);
        // Overridding virtual functions
        //void display() const override;
        double calculatePay() const override;

    private:
        double weeklySalary;
};

#endif