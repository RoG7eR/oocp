#include<iostream>
using namespace std;

class sum {
    private:
        int a,b;
    public:
        void GetData() {
            cin >> a >> b;
        }
        void Display();
};

void sum :: Display() {
    cout << a + b;
}

int main() {
    sum s1;

    s1.GetData();
    s1.Display();
    return 0;
}