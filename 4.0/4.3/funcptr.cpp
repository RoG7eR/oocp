#include<iostream>
#include<string>
using namespace std;

class FuncPtr {
    private:
        int ID;
        string Name;
    public:
        void setData(int id, string name) {
            this->ID = id;
            this->Name = name;
        }
        void display() {
            cout << "ID: " << this->ID << ", Name: " << this->Name << endl;
        } 
        
};

int main() {
    FuncPtr E1,E2;
    E1.setData(101, "Alice");
    FuncPtr* ptr = &E1;
    ptr->display();

    void(FuncPtr::*funcPtr)(int, string) = &FuncPtr::setData;
    (E2.*funcPtr)(102, "Bob");
    E2.display();
}