#include<iostream>
using namespace std;

class Marks {
    protected:
        int total;
    public:
        virtual void getdata() = 0;
        virtual void display() = 0;
};

class Student : public Marks {
    protected:
        string name;
        int rollno;
    public:
        void getdata() override {
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollno;
            cout << "Enter total marks: ";
            cin >> total;
        }

        void display() override {
            cout << "Student Name: " << name << endl;
            cout << "Roll Number: " << rollno << endl;
            cout << "Total Marks: " << total << endl;
        }
};

int main () {
    Marks* marks;
    Student student1;

    marks = &student1;
    marks->getdata();
    marks->display();

    return 0;
}