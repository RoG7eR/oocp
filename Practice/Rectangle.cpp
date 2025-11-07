#include<iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float breadth;
    public:
        void getData(float l, float b) {
            this->length = l;
            this->breadth = b;    
        }

        void DisplayArea() {
            cout << "Area of Rectangle: " << length * breadth << endl;
        }
};

int main() {
    Rectangle rect;
    float length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    rect.getData(length, breadth);
    rect.DisplayArea();

    return 0;
}