#include <iostream>
#include <vector>

#include "employee.h"
#include "salariedEmployee.h"
#include "hourlyEmployee.h"
#include "comissionEmployee.h"

int main (){
    std::vector<Employee*> employees;

    employees.push_back(new SalariedEmployee("Alice", 101, 1200));
    employees.push_back(new HourlyEmployee("Bob", 102, 15, 45));
    employees.push_back(new ComissionEmployee("Marley", 103, 500, 3, 150));

    for (const auto& emp : employees){
        emp->display();
        std::cout << "Weekly Pay: " << emp->calculatePay() << std::endl;
        if (&emp != &employees.back()) {
            std::cout << std::endl;
        }
    }

    for (auto emp : employees){
        delete emp;
    }

    return 0;
}