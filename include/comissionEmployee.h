#ifndef _COMISSION_EMPLOYEE_H_
#define _COMISSION_EMPLOYEE_H_

#include <string>
#include <iostream>
using namespace std;

#include "abstractEmployee.h"

class ComissionEmployee : public AbstractEmployee {
    public:
        ComissionEmployee(string name_, int id_, double salary, double sales_, double rate);
        void display() const override;

    private:
        double baseSalary;
        double sales;
        double comissionRate;
        double calculatePay() const override;
};

#endif