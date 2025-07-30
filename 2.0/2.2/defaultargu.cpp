/* Write a program to demonstrate the use of default arguments in
function overloading.*/

#include<iostream>
#define PI 3.14
using namespace std;

void AOC(float r = 3.6);
void AOR(int l = 5, int b = 6);
void AOS(int l = 5);
int main() {
    AOC();
    AOR();
    AOS();
}

void AOC(float r) {
    cout << PI * r * r << endl;
}

void AOR(int l, int b) {
    cout << l * b << endl;
}

void AOS(int l = 5) {
    cout << l * l;
}