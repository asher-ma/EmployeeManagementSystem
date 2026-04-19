#include <string>
#include <iostream>
using namespace std;

class abstractEmployee {
    public:
        abstractEmployee();
        virtual ~abstractEmployee();

    private:
        string name;
        int id;
        
        virtual double calculatePay() const =0;
        virtual void display() const {
            cout << "Name: " << name << " id: " << id << endl;
        };
};