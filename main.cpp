#include <iostream>
#include <vector>
using namespace std;

#include "include/employee.h"
#include "include/salariedEmployee.h"
#include "include/hourlyEmployee.h"
#include "include/comissionEmployee.h"

int main (){
    vector<Employee*> employees;

    employees.push_back(new SalariedEmployee("Alice", 101, 1200));
    employees.push_back(new HourlyEmployee("Bob", 102, 15, 45));
    employees.push_back(new ComissionEmployee("Marley", 103, 500, 3, 150));

    for (const auto& emp : employees){
        emp->display();
        cout << "Weekly Pay: " << emp->calculatePay() << endl;
    }

    for (auto emp : employees){
        delete emp;
    }
    
    return 0;
}