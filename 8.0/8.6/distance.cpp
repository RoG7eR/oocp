#include<iostream>
using namespace std;

class Distance {
    protected:
        int feet;
        float inches;
    public:
        Distance() {
            feet = 0;
            inches = 0.0;
        }
        void getData() {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }

        bool operator==(const Distance &d) {
            return (feet == d.feet && inches == d.inches);
        }

        bool operator<(const Distance &d) {
            return (feet * 12 + inches) < (d.feet * 12 + d.inches);
        }

        bool operator>(const Distance &d) {
            return (feet * 12 + inches) > (d.feet * 12 + d.inches);
        }
};

int main() {
    Distance d1, d2;
    cout << "Enter first distance:" << endl;
    d1.getData();
    cout << "Enter second distance:" << endl;
    d2.getData();

    if (d1 == d2) {
        cout << "Distances are equal." << endl;
    } else if (d1 < d2) {
        cout << "First distance is less than second distance." << endl;
    } else {
        cout << "First distance is greater than second distance." << endl;
    }

    return 0;
}