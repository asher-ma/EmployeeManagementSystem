#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_

#include <string>

#include "employee.h"

class SalariedEmployee : public Employee {
    public:
        SalariedEmployee(std::string name_, int id_, double salary);
        void display() const override;
        double calculatePay() const override;

    private:
        double weeklySalary;
};

#endif