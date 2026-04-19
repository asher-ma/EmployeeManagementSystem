#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>
#include <iostream>

class Employee {
    public:
        // Each employee class has these three parameters
        Employee(const std::string& type, const std::string& name_, int id_) : employeeType(type), name(name_), id(id_) {}

        // Virtual destructor to ensure base class is deleted with subclasses
        virtual ~Employee() {}

        // Display function can be reused for subclasses by passing employeeType up with parameter 
        void display() const {
            std::cout << "Employee: " << name << " (ID: " << id << ")\nType: " << employeeType << std::endl;
        }
        
        // Pure virtual function to be defined in each subclass
        virtual double calculatePay() const =0;

    private:
        std::string employeeType;
        std::string name;
        int id;
};

#endif