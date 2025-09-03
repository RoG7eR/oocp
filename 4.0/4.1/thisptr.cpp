#include <iostream>
#include <string>
using namespace std;

class Name {
    private:
        string name;
    public:
    void GetName() {
        cout << "Enter your name: ";
        cin >> this->name;
        cout << "Hello, " << this->name << "!" << endl;
    }
};

int main() {
    Name person;
    person.GetName();
    return 0;
}