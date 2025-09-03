#include<iostream>
using namespace std;

class complex {
    public:
        int X, Y;
        friend int sum(complex, complex);
        friend void show(complex);
};

int sum(complex a, complex b) {
    return (a.X + b.X) + (a.Y + b.Y);
}

void show(complex c) {
    cout << "Real part: " << c.X << ", Imaginary part: " << c.Y << endl;
}       

int main() {
    complex c1, c2;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> c1.X >> c1.Y;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> c2.X >> c2.Y;
    cout << "Sum of complex numbers: " << sum(c1, c2) << endl;
    cout << "First complex number: ";
    show(c1);
    cout << "Second complex number: ";
    show(c2);
    return 0;
}

