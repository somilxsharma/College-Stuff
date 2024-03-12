#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;
public:
    TicTacToe();
    void displayBoard();
    bool isBoardFull();
    bool isValidMove(int row, int col);
    bool checkWin();
    void play();
};

TicTacToe::TicTacToe() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
    currentPlayer = 'O';
}

void TicTacToe::displayBoard() {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool TicTacToe::isBoardFull() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool TicTacToe::isValidMove(int row, int col) {
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ');
}

bool TicTacToe::checkWin() {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return true;
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            return true;
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return true;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return true;
    }
    return false;
}

void TicTacToe::play() {
    int row, col;
    while (!isBoardFull()) {
        displayBoard();
        cout << "Player " << currentPlayer << ", enter row and column: ";
        cin >> row >> col;
        if (isValidMove(row, col)) {
            board[row][col] = currentPlayer;
            if (checkWin()) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                return;
            }
            currentPlayer = (currentPlayer == 'O') ? 'X' : 'O';
        } else {
            cout << "Invalid move! Please try again." << endl;
        }
    }
    displayBoard();
    cout << "It's a draw!" << endl;
}

int main() {
    TicTacToe game;
    game.play();
    return 0;
}
