#ifndef _COMISSION_EMPLOYEE_H_
#define _COMISSION_EMPLOYEE_H_

#include <string>

#include "employee.h"

class ComissionEmployee : public Employee {
    public:
        ComissionEmployee(const std::string& name_, int id_, double salary, double sales_, double rate);
        //void display() const override;
        double calculatePay() const override;

    private:
        double baseSalary;
        double sales;
        double comissionRate;
};

#endif