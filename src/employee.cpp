#include <iostream>
using namespace std;

#include "../include/employee.h"

Employee::~Employee() {}

void Employee::display() const {
    cout << "Employee: " << name << " (ID: " << id << ")" << endl;
}
