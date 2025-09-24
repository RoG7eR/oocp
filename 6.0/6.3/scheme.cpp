#include<iostream>
#include<string>
using namespace std;

class scheme {
    protected:
        int scheme_id;
        string scheme_name;
        double outgoing_rate;
        double message_charge;
    public:
        scheme() {
            cout << "Enter scheme id, scheme name, outgoing rate and message charge: " << endl;
            cin >> scheme_id >> scheme_name >> outgoing_rate >> message_charge;
        }
        void display() {
            cout << scheme_id << " " << scheme_name << " " << outgoing_rate << " " << message_charge << endl;
        }
};

class customer : public scheme {
    private:
        int no_of_messages = 1;
        int no_of_outgoing_calls = 1;
        long int mobile_no;
        int userInput;
    public:
        customer() {
            cout << "Enter mobile number: " << endl;
            cin >> mobile_no;
        }
        void display() {
            do {
                cout << "Enter 1 to display current scheme details" << endl;
                cout << "Enter 2 to call" << endl;
                cout << "Enter 3 to send message" << endl;
                cout << "Enter 4 to get total bill" << endl;
                cout << "Enter 0 to exit" << endl;
                cin >> userInput;
                switch(userInput) {
                    case 1:
                        scheme::display();
                        break;
                    case 2:
                        no_of_outgoing_calls++;
                        cout << "Call made. Total outgoing calls: " << no_of_outgoing_calls << endl;
                        break;
                    case 3:
                        no_of_messages++;
                        cout << "Message sent. Total messages: " << no_of_messages << endl;
                        break;
                    case 4:
                        cout << "Total bill for mobile number " << mobile_no << " is: " << (no_of_outgoing_calls * outgoing_rate + no_of_messages * message_charge) << endl;
                        break;
                    case 0:
                        cout << "Exiting..." << endl;
                        break;
                    default:
                        cout << "Invalid input. Please try again." << endl;
                }
            } while(userInput != 0);
            cout << mobile_no << " " << no_of_messages << " Total charge: " << (no_of_messages * message_charge) << endl;
        }
};

int main() {
    customer c1;
    c1.display();
    return 0;
}