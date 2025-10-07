#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    protected:
        string vehicleno, chassisno;
    public:
        virtual void getdata() {
            cout << "Enter vehicle number: ";
            cin >> vehicleno;
            cout << "Enter chassis number: ";
            cin >> chassisno;
        }

        virtual void display() {
            cout << "Vehicle Number: " << vehicleno << endl;
            cout << "Chassis Number: " << chassisno << endl;
        }
};

class Scooter : public Vehicle {
    protected:
        int wheels;
        string company;
    public:
        void getdata() override {
            cout << "Enter number of wheels: ";
            cin >> wheels;
            cout << "Enter company name: ";
            cin >> company;
        }

        void display() override {
            Vehicle::display();
            cout << "Number of Wheels: " << wheels << endl;
            cout << "Company Name: " << company << endl;
        }
};

class Car : public Vehicle {
    protected:
        double price;
        string company;
    public:
        void getdata() override {
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter company name: ";
            cin >> company;
        }

        void display() override {
            Vehicle::display();
            cout << "Price: " << price << endl;
            cout << "Company Name: " << company << endl;
        }
};

int main() {
    Vehicle* vptr;
    Scooter s;
    Car c;

    cout << "Enter details for Scooter:" << endl;
    vptr = &s;
    vptr->Vehicle::getdata();
    s.getdata(); 

    cout << "\nEnter details for Car:" << endl;
    vptr = &c;
    vptr->Vehicle::getdata(); 
    c.getdata(); 

    cout << "\nScooter Details:" << endl;
    vptr = &s;
    vptr->display();

    cout << "\nCar Details:" << endl;
    vptr = &c;
    vptr->display();

    return 0;
}