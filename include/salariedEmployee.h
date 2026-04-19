#include <string>
#include <iostream>
using namespace std;

#include "abstractEmployee.h"

class SalariedEmployee : public AbstractEmployee {
    public:
        SalariedEmployee(string n, int i, double s);
        void display() const override;
        
    private:
        double weeklySalary;
        double calculatePay() const override;
};