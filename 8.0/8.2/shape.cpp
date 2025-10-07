#include<iostream>
using namespace std;

class Shape {
    protected:
        double length, breadth;
    public:
        void getdata() {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
        }

        virtual void displayArea() = 0;
};

class Triangle : public Shape {
    public:
        void displayArea() override {
            cout << "Area of Triangle: " << 0.5 * length * breadth << endl;
        }
};

class Rectangle : public Shape {
    public:
        void displayArea() override {
            cout << "Area of Rectangle: " << length * breadth << endl;
        }
};

int main() {

    Shape* shape1;
    Triangle t1;
    Rectangle r1;

    shape1 = &t1;
    shape1->getdata();
    shape1->displayArea();

    shape1 = &r1;
    shape1->getdata();
    shape1->displayArea();   

    return 0;
}
