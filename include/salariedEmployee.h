#include <string>
#include <iostream>
using namespace std;

#include "abstractEmployee.h"

class SalariedEmployee : public AbstractEmployee {
    public:
    SalariedEmployee(string n, int i);

    private:
        double weeklySalary;
        double calculatePay();
};