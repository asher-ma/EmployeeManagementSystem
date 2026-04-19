#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_

#include <string>
#include <iostream>
using namespace std;

#include "abstractEmployee.h"

class SalariedEmployee : public AbstractEmployee {
    public:
        SalariedEmployee(string name_, int id_, double salary);
        void display() const override;

    private:
        double weeklySalary;
        double calculatePay() const override;
};

#endif