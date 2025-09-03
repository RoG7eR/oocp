#include<iostream>
using namespace std;

class DB;
class DM {
    public:
        double meters, centimeters;
        friend DM add(DM, DB);
        void display() {
            cout << "Distance in meters: " << meters << ", centimeters: " << centimeters << endl;
        }
};

class DB {
    public:
        double feet, inches;
        friend DM add(DM, DB);

};
DM add(DM dm, DB db) {
    double meterTotal = dm.meters * 100 + (db.feet * 30.48);
    double centiTotal = dm.centimeters + (db.inches * 2.54);

    int allcm = meterTotal + centiTotal;
    DM result;
    result.meters = allcm / 100;
    result.centimeters = allcm % 100;

    return result;
}

int main() {
    DM dm;
    DB db;

    cout << "Enter distance in meters and centimeters: ";
    cin >> dm.meters >> dm.centimeters; 
    cout << "Enter distance in feet and inches: ";
    cin >> db.feet >> db.inches;

    DM Total = add(dm, db);
    Total.display();
    return 0;
}