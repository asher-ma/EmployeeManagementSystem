#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>
#include <iostream>

class Employee {
    public:
        Employee(std::string name_, int id_) : name(name_), id(id_) {}        
        virtual ~Employee() {}

        virtual void display() const {
            std::cout << "Employee: " << name << " (ID: " << id << ")" << std::endl;
        }
        virtual double calculatePay() const =0;

    private:
        std::string name;
        int id;
};

#endif