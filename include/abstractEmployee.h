#include <string>
#include <iostream>
using namespace std;

class AbstractEmployee {
    public:
        AbstractEmployee(string n, int i) : name(n), id(i) {}
        virtual ~AbstractEmployee();

    private:
        string name;
        int id;
        
        virtual double calculatePay() const =0;
        virtual void display() const {
            cout << "Name: " << name << " id: " << id << endl;
        };
};