#include <string>
#include <iostream>
using namespace std;

#include "abstractEmployee.h"

class salariedEmployee : public abstractEmployee {
    private:
        double weeklySalary;
        
        double calculatePay();
};