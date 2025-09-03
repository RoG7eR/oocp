#include<iostream>
using namespace std;

class Currency {
    private:
        int rupees;
        int paise;
    public:
        Currency(int r = 0, int p = 0) {
            this->rupees = r;
            this->paise = p;
        }
        void GetCurrency() {
            cout << "Enter rupees: ";
            cin >> this->rupees;
            cout << "Enter paise: ";
            cin >> this->paise;
        }
        void DisplayCurrency() {
            cout << "Currency: " << this->rupees << " rupees and " << this->paise << " paise" << endl;
        }
        friend Currency AddCurrency(Currency c1, Currency c2);    
};

Currency AddCurrency(Currency c1, Currency c2) {
    int totalPaise = c1.paise + c2.paise;
    int totalRupees = c1.rupees + c2.rupees + totalPaise / 100;
    totalPaise = totalPaise % 100;
    return Currency(totalRupees, totalPaise);
}

int main() {
    Currency c1, c2, c3;
    cout << "C1:" << endl;
    c1.GetCurrency();
    cout << "C2:" << endl;
    c2.GetCurrency();
    c3 = AddCurrency(c1, c2);
    cout << "Total ";
    c3.DisplayCurrency();
    return 0;
}