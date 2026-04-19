#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>
#include <iostream>

class Employee {
    public:
        Employee(std:: string type, std::string name_, int id_) : employeeType(type), name(name_), id(id_) {}        
        virtual ~Employee() {}

        virtual void display() const {
            std::cout << "Employee: " << name << " (ID: " << id << ")\nType: " << employeeType << std::endl;
        }
        virtual double calculatePay() const =0;

        std::string employeeType;
        
    private:
        std::string name;
        int id;
};

#endif