#include <iostream>
#include <vector>

#include "employee.h"
#include "salariedEmployee.h"
#include "hourlyEmployee.h"
#include "comissionEmployee.h"

int main (){
    std::vector<Employee*> employees;

    // Push different employee subclass objects to vector
    employees.push_back(new SalariedEmployee("Alice", 101, 1200));
    employees.push_back(new HourlyEmployee("Bob", 102, 15, 45));
    employees.push_back(new ComissionEmployee("Marley", 103, 500, 3, 150));

    // Loop through employees
    for (const auto& emp : employees){
        // Display each employee
        // Calls base class display()
        emp->display();

        // Display weekly pay for each employee
        // Calls overriden calculatePay() unique to each subclass
        std::cout << "Weekly Pay: " << emp->calculatePay() << std::endl;

        // Adds a line break if this is not the last item in vector
        if (&emp != &employees.back()) {
            std::cout << std::endl;
        }
    }

    // Delete employees to free memory
    for (auto emp : employees){
        delete emp;
    }

    return 0;
}