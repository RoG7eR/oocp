#include <iostream>
using namespace std;

class Rupees;
class Paise {
private:
    float p;

public:
    Paise() {
        p = 0;
    }
    Paise(float amount) {
        p = amount;
    }

    void display() {
        cout << p << " paise" << endl;
    }
    operator Rupees(); 
};

class Rupees {
private:
    float r;

public:
    Rupees() {
        r = 0;
    }
    Rupees(float amount) {
        r = amount;
    }
    void display() {
        cout << r << " rupees" << std::endl;
    }
    operator Paise() {
        return Paise(r * 100);
    }
};

Paise::operator Rupees() {
    return Rupees(p / 100.0f); 
}

int main() {
    cout << "--- Rupees to Paise Conversion ---" << endl;
    Rupees R1(15.50); 
    Paise P1;

    std::cout << "Initial amount in Rupees: ";
    R1.display();
    P1 = R1;

    std::cout << "Converted amount in Paise: ";
    P1.display();
    cout << "--------------------------------\n" << endl;
    cout << "--- Paise to Rupees Conversion ---" << endl;
    Paise P2(250);
    Rupees R2;

    cout << "Initial amount in Paise: ";
    P2.display();
    R2 = P2;

    cout << "Converted amount in Rupees: ";
    R2.display();
    cout << "--------------------------------" << endl;
    return 0;
}
