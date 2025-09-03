#include<iostream>
using namespace std;

class One;

class Two {
    private:
        int num1;
    public:
        void setNum1() {
            cout << "Enter number: ";
            cin >> this->num1;
        }
        friend int FriendMax(One o, Two t);
};

class One {
    private:
        int num2;
    public:
        void setNum2() {
            cout << "Enter number: ";
            cin >> this->num2;
        }
        friend int FriendMax(One o, Two t);
};

int FriendMax(One o, Two t) {
    if(o.num2 > t.num1) {
        return o.num2;
    } else {
        return t.num1;
    }
}

int main() {
    One o;
    Two t;
    o.setNum2();
    t.setNum1();
    cout << "Maximum number is: " << FriendMax(o, t) << endl;
    return 0;
}