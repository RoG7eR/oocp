#include<iostream>
using namespace std;

class Media {
    public:
        virtual void play() {
            cout << "PPlaying generic media." << endl;
        }
};

class Song : public Media {
    protected:
        string title;
    public:
        void getData() {
            cout << "Enter song title: ";
            cin >> title;
        }

        void play() override {
            cout << "Playing song: " << title << endl;
        }
};

int main() {
    Media* mediaPtr;
    Song mySong;

    mySong.getData();
    mediaPtr = &mySong;
    mediaPtr->play();
    return 0;
}