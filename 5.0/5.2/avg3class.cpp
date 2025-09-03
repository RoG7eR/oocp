#include<iostream>
using namespace std;

class Three;
class Two;

class One {
    private:
        int num1;
    public:
        void setNum1() {
            cout << "Enter number for class One: ";
            cin >> this->num1;
        }
        friend float Avg(One o, Two t, Three th);
};

class Two {
    private:
        int num2;
    public:
        void setNum2() {
            cout << "Enter number for class Two: ";
            cin >> this->num2;
        }
        friend float Avg(One o, Two t, Three th);
};

class Three {
    private:
        int num3;
    public:
        void setNum3() {
            cout << "Enter number for class Three: ";
            cin >> this->num3;
        }
        friend float Avg(One o, Two t, Three th);
};

float Avg(One o, Two t, Three th) {
    return (o.num1 + t.num2 + th.num3) / 3.0;
}

int main() {
    One o;
    Two t;
    Three th;
    o.setNum1();
    t.setNum2();
    th.setNum3();
    cout << "Average is: " << Avg(o, t, th) << endl;
    return 0;
}