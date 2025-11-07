#include<iostream>
#include<cstring>
using namespace std;

class Shape {
    protected:
        char color[20];
    public:
        Shape(const char* c) {
            strcpy(color, c);
        }

        void displayColor() {
            cout << "Color of the shape: " << color << endl;
        }
};

class Rectangle : public Shape {
    private:
        float length;
        float breadth;
    public:
        Rectangle(char* c, float l, float b) : Shape(c) {
            length = l;
            breadth = b;
        }

        void displayArea() {
            displayColor();
            cout << "Area of Rectangle: " << length * breadth << endl;
        }
};

int main() {
    char color[20];
    float length, breadth;

    cout << "Enter color of the rectangle: ";
    cin >> color;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    Rectangle rect(color, length, breadth);
    rect.displayArea();

    return 0;
}