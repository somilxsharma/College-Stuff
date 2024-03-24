#include <iostream>
#include <string>

using namespace std;

class Library {
private:
    string books[4][2] = {
        {"9780321714114", "Let us C"},
        {"9780131103627", "The C Programming Language"},
        {"9780321623218", "C++"},
        {"9780321958310", "Coding Masters"}
    };
public:
    void lookupBook(const string& isbn) {
        bool found = false;
        string title;
        for (int i = 0; i < 4; ++i) {
            if (books[i][0] == isbn) {
                title = books[i][1];
                found = true;
                break;
            }
        }

        if (found) {
            cout << "Book Title: " << title << endl;
        } else {
            cout << "Book with ISBN " << isbn << " not found in the library." << endl;
        }
    }
};

int main() {
    Library library;

    string isbn;
    cout << "Enter the ISBN of the book to lookup: ";
    cin >> isbn;

    library.lookupBook(isbn);

    return 0;
}
