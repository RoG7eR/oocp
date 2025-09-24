#include<iostream>
#include<string>
using namespace std;

class Employee {
    protected:
        int id;
        string name;
        double salaryScale = 10;
    public:
        Employee() {
            cout << "Enter id and name of employee: " << endl;
            cin >> id >> name;
        }
        virtual double ComputePay() = 0;
        void display() {
            cout << id << " " << name << " " <<  "pay of employee: " << ComputePay() << endl;
        }
};

class MaleEmployee : public Employee {
    protected:
        double timeWorked;
    public:
        MaleEmployee() {
            cout << "How many hours worked: " << endl;
            cin >> timeWorked;
        }
        double ComputePay() override{
            return (timeWorked / 24) * salaryScale;
        }
};

class FemaleEmployee : public Employee {
    protected:
        double timeWorked;
    public:
        FemaleEmployee() {
            cout << "How many hours worked: " << endl;
            cin >> timeWorked;
        }
        double ComputePay() override{
            if(timeWorked < 40) {
                return 40 * salaryScale;
            }
            else {
                return (timeWorked / 24) * salaryScale;
            }
        }
};

int main() {
    MaleEmployee m1;
    FemaleEmployee f1;
    m1.display();
    f1.display();
    return 0;
}