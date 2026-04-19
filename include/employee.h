#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>

class Employee {
    public:
        Employee(string name_, int id_) : name(name_), id(id_) {}        
        virtual ~Employee();

        virtual void display() const {};
        virtual double calculatePay() const =0;

    private:
        string name;
        int id;
};

#endif