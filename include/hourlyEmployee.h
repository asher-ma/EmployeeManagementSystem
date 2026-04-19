#include <string>
#include <iostream>
using namespace std;

#include "abstractEmployee.h"

class HourlyEmployee : public AbstractEmployee {
    public:
        HourlyEmployee(string n, int i, double rate, double hours);
        void display() const override;
        
    private:
        double hourlyRate;
        double hoursWorked;
        double calculatePay() const override;
};