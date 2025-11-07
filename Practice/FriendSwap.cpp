#include<iostream>
using namespace std;

class Two;

class One {
    private:
        int num1;
    public:
        void getData() {
            cout << "Enter number for class One: ";
            cin >> num1;
        }

        void displayData() {
            cout << "Number in class One: " << num1 << endl;
        }
        friend void swap(One &, Two &);
};

class Two {
    private:
        int num2;
    public:
        void getData() {
            cout << "Enter number for class Two: ";
            cin >> num2;
        }

        void displayData() {
            cout << "Number in class Two: " << num2 << endl;
        }
        friend void swap(One &, Two &);
};

void swap(One &a, Two &b) {
    int temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}

int main() {
    One obj1;
    Two obj2;

    obj1.getData();
    obj2.getData();

    cout << "Before swapping:" << endl;
    cout << "Class One number: " << endl;
    obj1.displayData();
    cout << "Class Two number: " << endl;
    obj2.displayData();

    swap(obj1, obj2);

    cout << "After swapping:" << endl;
    cout << "Class One number: " << endl;
    obj1.displayData();
    cout << "Class Two number: " << endl;
    obj2.displayData();


    return 0;
}