#include <string>
#include <iostream>
using namespace std;

class AbstractEmployee {
    public:
        AbstractEmployee(string name_, int id_) : name(name_), id(id_) {}        
        virtual ~AbstractEmployee();

        virtual void display() const {
            cout << "Employee: " << name << " (ID: " << id << ")" << endl;
        };

    private:
        string name;
        int id;
        
        virtual double calculatePay() const =0;
};