/*Create a class student which stores the detail about roll no, name,
marks of 5 subjects, i.e. science, Mathematics, English, C++. The class
must have the following:• Get function to accept value of the data
members.• Display function to display values of data members.• Total
function to add marks of all 5 subjects and store it in the data members
named total. */

#include<iostream>
using namespace std;

class student {
    private:
        string subjects[5] = {"Science", "Mathematics", "English", "C++", "History"};
        int marks[5];
        int rollno;
        string name;
        int total = 0;
    public:
        void GetValues() {
            cout << "Enter roll no";
            cin >> rollno;
            cout << "Enter name";
            cin >> name;

            cout << "Enter marks of subject:" << endl;
            for(int i = 0; i < 5; i++) {
                cout << "Enter marks for " << subjects[i] << ":";
                cin >> marks[i];
            }
        }

        void Total() {
            for (int i = 0; i < 5; i++) {
                total += marks[i];
            }
        }

        void Display() {
            cout << name << endl;
            cout << rollno << endl;
            cout << "Total marks" << total;
        }
};

int main() {
    student s1;

    s1.GetValues();
    s1.Total();
    s1.Display();
}