#include<iostream>
#include<cstring>
using namespace std;

class String {
    protected:
        char str[100];
    public:
        String() {
            str[0] = '\0';
        }
        String(char* s) {
            strcpy(str, s);
        }
       
        String operator+(String& s) {
            return String(strcat(str, s.str));
        }

        void getData() {
            cout << "Enter String: ";
            cin >> str;
        }

        void display() {
            cout << "Concatenated String: " << str << endl;
        }
};

int main() {
    String s1, s2, s3;
    s1.getData();
    s2.getData();
    s3 = s1 + s2;
    s3.display();

    return 0;
}