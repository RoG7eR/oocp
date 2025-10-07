#include<iostream>
#include<string>
using namespace std;

class Formula1 {
    protected:
        string teamName;
    public:
        Formula1() {
            cout << "F1 constructor called" << endl;
        }
        virtual void getTeamData() {
            cout << "Enter Formula 1 Team Name: ";
            getline(cin, teamName);
        }

        virtual void displayTeamData() {
            cout << "Formula 1 Team Name: " << teamName << endl;
        }
        ~Formula1() {
            cout << "F1 destructor called" << endl;
        }
};

class RedBullRacing {
    protected:
        string leadDriver;
    public:
        RedBullRacing() {
            cout << "Red Bull Racing constructor called" << endl;
        }
        void getTeamData() {
            cout << "Enter Red Bull Racing Lead Driver: ";
            getline(cin, leadDriver);
        }

        void displayTeamData() {
            cout << "Red Bull Racing Lead Driver: " << leadDriver << endl;
        }
        ~RedBullRacing() {
            cout << "Red Bull Racing destructor called" << endl;
        }
};

class MaxVerstappen : public Formula1, public RedBullRacing {
    protected:
        int championshipsWon;
    public:
        MaxVerstappen() {
            cout << "Max Verstappen constructor called\n" << endl;
        }
        
        void getTeamData() override {
            Formula1::getTeamData();
            RedBullRacing::getTeamData();
            cout << "Enter number of championships won by Max Verstappen: ";
            cin >> championshipsWon;
            cout << "--------------------------------" << endl;
        }

        void displayTeamData() override {
            Formula1::displayTeamData();
            RedBullRacing::displayTeamData();
            cout << "Max Verstappen Championships Won: " << championshipsWon << endl;
        }
        ~MaxVerstappen() {
            cout << "\nMax Verstappen destructor called" << endl;
        }
};

int main() {
    MaxVerstappen max;

    max.getTeamData();
    max.displayTeamData();

    return 0;
}