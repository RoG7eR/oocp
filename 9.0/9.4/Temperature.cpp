#include <iostream>
using namespace std;

class Fahrenheit;
class Celsius {
private:
    float temp;

public:
    Celsius(float t = 0.0f) {
        temp = t;
    }
    void display() {
        cout << temp << " degrees Celsius" << endl;
    }
    operator Fahrenheit(); 
};
class Fahrenheit {
private:
    float temp;

public:
    Fahrenheit(float t = 0.0f) {
        temp = t;
    }
    void display() {
        cout << temp << " degrees Fahrenheit" << endl;
    }
    operator Celsius() {
        return Celsius((temp - 32.0f) * 5.0f / 9.0f);
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9.0f / 5.0f) + 32.0f);
}

int main() {
    cout << "--- Celsius to Fahrenheit Conversion ---" << endl;
    Celsius c1(37.0f); 
    Fahrenheit f1;

    cout << "Initial temperature: ";
    c1.display();
    f1 = c1;

    cout << "Converted temperature: ";
    f1.display();
    cout << "--------------------------------------\n" << endl;
    cout << "--- Fahrenheit to Celsius Conversion ---" << endl;
    Fahrenheit f2(212.0f); 
    Celsius c2;

    cout << "Initial temperature: ";
    f2.display();
    c2 = f2;

    cout << "Converted temperature: ";
    c2.display();
    cout << "--------------------------------------" << endl;

    return 0;
}

