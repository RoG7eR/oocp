#include<iostream>

using namespace std;

class Book {
    private:
        char title[50];
        char author[50];
        char DateOfPublication[20];
    public:
        void getData() {
            cout << "Enter the title of the book: ";
            cin.getline(title, 50);
            cout << "Enter the author of the book: ";
            cin.getline(author, 50);
            cout << "Enter the date of publication: ";
            cin.getline(DateOfPublication, 20);
        }
        void displayData() {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Date of Publication: " << DateOfPublication << endl;
        }
};

int main() {
    Book book;
    book.getData();
    cout << "\nBook Details:" << endl;
    book.displayData();
    return 0;
}