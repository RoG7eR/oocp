/* Write a program to calculate the area of circle, rectangle and square 
using function overloading.*/

#include<iostream>
#define PI 3.14
using namespace std;

void AOC(float r);
void AOR(int l, int b);
void AOS(int l);
int main() {
    int a = 5, b = 6;
    float c = 3.6;

    AOC(c);
    AOR(a, b);
    AOS(a);
}

void AOC(float r) {
    cout << PI * r * r << endl;
}

void AOR(int l, int b) {
    cout << l * b << endl;
}

void AOS(int l) {
    cout << l * l;
}