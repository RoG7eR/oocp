#include <iostream>
#include<string>
using namespace std;

class account {
    protected:
        string custName;
        int accountno;
        int accountType;
        double balance;
    public:
        account() {
            cout << "Enter account type" << endl;
            cout << "1 for Savings, 2 for Current" << endl;
            cin >> accountType;
            if(accountType == 1 || accountType == 2) {
                cout << "Proceeding..." << endl;
            }
            else {
                cout << "Wrong input" << endl;
            }
            switch (accountType) {
            case 1:
                cout << "Your Account type is: Savings" << endl;
                cout << "Enter Account no.: " << endl;
                cin >> accountno;
                cout << "Enter Customer name: " << endl;
                cin >> custName;
                cout << "Enter balance: " << endl;
                cin >> balance;
                break;
           case 2:
                cout << "Your Account type is: Current" << endl;
                cout << "Enter Account no.: " << endl;
                cin >> accountno;
                cout << "Enter Customer name: " << endl;
                cin >> custName;
                cout << "Enter balance: " << endl;
                cin >> balance;
                break;
            default:
                break;
        }
    }
        void display() {
            cout << "Account no.: " << accountno << endl;
            cout << "Customer name: " << custName << endl;
            cout << "Account type: " << accountType << endl;
            cout << "Balance: " << balance << endl;
        }
        
        virtual void deposit() = 0;
        virtual void withdraw() = 0;
        virtual void compute_interest() = 0;
};

class cur_acc : public account {
    private:
        double interest_rate = 0.5;
    public:
        void deposit() override {
            double amount;
            cout << "Enter amount to deposit: " << endl;
            cin >> amount;
            balance += amount;
            cout << "New balance is: " << balance << endl;
        }
        void withdraw() override {
            double amount;
            cout << "Enter amount to withdraw: " << endl;
            cin >> amount;
            if(amount > balance) {
                cout << "Insufficient balance" << endl;
            } else {
                balance -= amount;
                cout << "New balance is: " << balance << endl;
            }
        }

        void compute_interest() override {
            double interest = balance * interest_rate;
            balance += interest;
            cout << "Balance with interest is: " << balance << endl;
        }
};

class sav_acc : public account {
    private:
        double interest_rate = 0.8;
    public:
        void deposit() override {
            double amount;
            cout << "Enter amount to deposit: " << endl;
            cin >> amount;
            balance += amount;
            cout << "New balance is: " << balance << endl;
        }
        void withdraw() override {
            double amount;
            cout << "Enter amount to withdraw: " << endl;
            cin >> amount;
            if(amount > balance) {
                cout << "Insufficient balance" << endl;
            } else {
                balance -= amount;
                cout << "New balance is: " << balance << endl;
            }
        }

        void compute_interest() override {
            double interest = balance * interest_rate;
            balance += interest;
            cout << "Balance with interest is: " << balance << endl;
        }
};

int main() {
    cur_acc C1;
    sav_acc S1;
    C1.deposit();
    C1.withdraw();
    C1.compute_interest();
    C1.display();

    S1.deposit();
    S1.display();
    return 0;
}

