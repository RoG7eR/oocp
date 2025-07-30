/* Write a program to demonstrate the use of default arguments in
function overloading.*/

#include <iostream>
using namespace std;

int& getElement(int arr[], int index);

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "Original value at index 2: " << numbers[2] << endl;
    getElement(numbers, 2) = 100;
    cout << "Updated value at index 2: " << numbers[2] << endl;
    return 0;
}

int& getElement(int arr[], int index) {
    return arr[index]; 
}