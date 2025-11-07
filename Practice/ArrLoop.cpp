#include<iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;
    int avg = 0;
    int largest;;
    int smallest = 0;

    cout << "Enter " << SIZE << " integers:" << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    largest = arr[0];

while(smallest < SIZE) {
        if(arr[smallest] > largest) {
            largest = arr[smallest];
        }
        smallest++;
    }

    avg = sum / SIZE;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Largest: " << largest << endl;
    return 0;
}    