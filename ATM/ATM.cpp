#include <iostream>
#include <cstdlib>

using namespace std;

void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

void printIntroMenu() {
    cout << "Please select an option from the menu below:" << endl;
    cout << "l -> Login" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "q -> Quit" << endl;
    cout << "> ";
}

void printMainMenu() {
    cout << "d -> Deposit Money" << endl;
    cout << "w -> Withdraw Money" << endl;
    cout << "r -> Request Balance" << endl;
    cout << "q -> Quit" << endl;
    cout << "> ";
}

void start() {
    cout << "Hi! Welcome to Mr. Zamar’s ATM Machine!" << endl;
    while (true) {
        printIntroMenu();
        char choice;
        cin >> choice;
        switch (choice) {
            case 'l':
                login();
                break;
            case 'c':
                createAccount();
                break;
            case 'q':
                cout << "Thanks for stopping by!" << endl;
                exit(0);
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}

void login() {
    cout << "Please enter your user id: ";
    int userId;
    cin >> userId;
    cout << "Please enter your password: ";
    int password;
    cin >> password;
    if (userId == 12 && password == 2345) {
        cout << "Access Granted!" << endl;
        while (true) {
            printMainMenu();
            char choice;
            cin >> choice;
            switch (choice) {
                case 'd':
                    cout << "Amount of deposit: $";
                    double deposit;
                    cin >> deposit;
                    cout << "Deposited $" << deposit << " successfully!" << endl;
                    break;
                case 'w':
                    cout << "Amount of withdrawal: $";
                    double withdrawal;
                    cin >> withdrawal;
                    cout << "Withdrawn $" << withdrawal << " successfully!" << endl;
                    break;
                case 'r':
                    cout << "Your balance is $20." << endl; // Dummy balance
                    break;
                case 'q':
                    cout << "Thanks for stopping by!" << endl;
                    exit(0);
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        }
    } else {
        cout << "******** LOGIN FAILED! ********" << endl;
    }
}

void createAccount() {
    cout << "Please enter your user id: ";
    int userId;
    cin >> userId;
    cout << "Please enter your password: ";
    int password;
    cin >> password;
    cout << "Thank You! Your account has been created!" << endl;
}

int main() {
    start();
    return 0;
}
