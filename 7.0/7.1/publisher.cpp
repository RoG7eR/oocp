#include <iostream>
#include <string>
using namespace std;

class publisher {
    private:
        string bookTitle;
    public:
        virtual void GetData() {
            cout << "Enter book title: ";
            getline(cin, bookTitle);
        }
        
        virtual void Display() {
            cout << "Book title is: " << bookTitle << endl;
        }
};

class book : public publisher {
    private:
        int pageno;
    public:
        void GetData()  {
            cout << "Enter page no.: ";
            cin >> pageno;
        }
        
        virtual void Display() override {
            cout << "Total page no. in book: " << pageno << endl;
        }
};

class tape : public publisher {
    private:
        float timebook;
    public:
        void GetData() override {
            cout << "Enter time for playing: ";
            cin >> timebook;
        }
        
        void Display() override {
            cout << "Time for playing is " << timebook << endl;
        }
};

int main() { 

    publisher p1;
    book b1;
    tape t1;
    
    p1.GetData();
    b1.GetData();
    t1.GetData();
    
    p1.Display();
    b1.Display();
    t1.Display();
    
    return 0;
}