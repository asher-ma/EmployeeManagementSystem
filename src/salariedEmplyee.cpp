#include <iostream>
using namespace std;

#include "../include/salariedEmployee.h"

SalariedEmployee::SalariedEmployee(string n, int i, double s) : AbstractEmployee(n, i), weeklySalary(s) {}

double SalariedEmployee::calculatePay(){
    return weeklySalary;
}

void SalariedEmployee::display(){
    
}