#include <iostream>
using namespace std;

class Election {
    private:
        int Sploitb = 0, Ballot = 0, n = 0;
        int Candidate[5];
    public:
    Election() {
        for (int i = 0; i < 5; i++) {
            Candidate[i] = 0;
        }
    }

    void Vote() {
        cout << "Enter number of ballots: ";
        cin >> Ballot;
        for (int i = 0; i < Ballot; i++) {
            cout << "Vote for candidate (1-5): ";
            cin >> n;
            if (n >= 1 && n <= 5) {
                this->Candidate[n - 1]++;
            } else {
                this->Sploitb++;
            }
        }    
    }
    void Result() {
        cout << "Election Results:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Candidate " << (i + 1) << ": " << this->Candidate[i] << " votes" << endl;
        }
        cout << "Spoiled ballots: " << this->Sploitb << endl;
    }
};

int main() {
    Election election;
    election.Vote();
    election.Result();
    return 0;
}