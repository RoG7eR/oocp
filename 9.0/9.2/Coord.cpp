#include <iostream>
using namespace std;
class Coord {
private:
    int x, y;

public:
    Coord(int initialX = 0, int initialY = 0) {
        x = initialX;
        y = initialY;
    }
    void display() {
        cout << "(x=" << x << ", y=" << y << ")" << std::endl;
    }
    Coord& operator++() {
        x++;
        y++;
        return *this;
    }
    Coord operator++(int) {
        Coord temp = *this; 
        x++;                
        y++;
        return temp;       
    }
    Coord& operator--() {
        x--;
        y--;
        return *this;
    }
    Coord operator--(int) {
        Coord temp = *this; 
        x--;                
        y--;
        return temp;       
    }
};

int main() {
    Coord c1(10, 20);
    cout << "Initial state of c1: ";
    c1.display();
    cout << "--------------------------------\n";

    cout << "Demonstrating Prefix Increment (++c1)\n";
    Coord c2 = ++c1;
    cout << "Value of c2 (the result of the operation): ";
    c2.display();
    cout << "Value of c1 after the operation:          ";
    c1.display();
    cout << "--------------------------------\n";

    cout << "Demonstrating Postfix Increment (c1++)\n";
    Coord c3 = c1++;
    cout << "Value of c3 (the result of the operation): ";
    c3.display();
    cout << "Value of c1 after the operation:          ";
    c1.display();
    cout << "--------------------------------\n";

    cout << "Demonstrating Prefix Decrement (--c1)\n";
    Coord c4 = --c1;
    cout << "Value of c4 (the result of the operation): ";
    c4.display();
    cout << "Value of c1 after the operation:          ";
    c1.display();
    cout << "--------------------------------\n";

    cout << "Demonstrating Postfix Decrement (c1--)\n";
    Coord c5 = c1--;
    cout << "Value of c5 (the result of the operation): ";
    c5.display();
    cout << "Value of c1 after the operation:          ";
    c1.display();
    cout << "--------------------------------\n";

    return 0;
}