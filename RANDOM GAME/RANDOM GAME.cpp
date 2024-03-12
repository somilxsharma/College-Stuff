#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GuessTheNumber {
private:
    int computerGeneratedNumber;
    int userGuessedNumber;
public:
    void generateRandomNumber();
    void startGame();
};

void GuessTheNumber::generateRandomNumber() {
    srand(time(nullptr));
    computerGeneratedNumber = rand() % 100 + 1;
}

void GuessTheNumber::startGame() {
    int attempts = 0;
    cout << "Guess the number: ";
    while (true) {
        cin >> userGuessedNumber;
        attempts++;
        if (userGuessedNumber < computerGeneratedNumber) {
            cout << "Attempt: " << attempts << endl;
            cout << "Message: Guessed number is smaller than computer generated number" << endl;
        } else if (userGuessedNumber > computerGeneratedNumber) {
            cout << "Attempt: " << attempts << endl;
            cout << "Message: Guessed number is greater than computer generated number" << endl;
        } else {
            cout << "Attempt: " << attempts << endl;
            cout << "Message: Congratulations! You won the game in " << attempts << " attempts." << endl;
            break;
        }
        cout << "Guess the number: ";
    }
}

int main() {
    GuessTheNumber game;
    game.generateRandomNumber();
    game.startGame();
    return 0;
}
