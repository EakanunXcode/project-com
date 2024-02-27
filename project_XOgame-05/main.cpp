#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


void printBoard(const vector<vector<char>>& board) {
    cout << "  1 2 3" << endl;
    cout << " -------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << "|";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


bool isBoardFull(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false; 
            }
        }
    }
    return true; 
}


bool checkWin(const vector<vector<char>>& board, char player) {
    
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true; 
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true; 
    }
    return false; 
}


void botMove(vector<vector<char>>& board) {
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] != ' ');
    board[row][col] = 'O';
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    srand(time(0));

    cout << "Welcome to Tic-Tac-Toe!" << endl;
    while (true) {
        printBoard(board);

        int row, col;
        cout << "Enter row and column (e.g., 1 2): ";
        cin >> row >> col;
        row--; 
        col--; 
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = 'X'; 
        } else {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        if (checkWin(board, 'X')) {
            printBoard(board);
            cout << "Congratulations! You win!" << endl;
            break;
        }

        if (isBoardFull(board)) {
            printBoard(board);
            cout << "It's a tie!" << endl;
            break;
        }

        cout << "Bot is making a move..." << endl;
        botMove(board);

        if (checkWin(board, 'O')) {
            printBoard(board);
            cout << "Sorry! Bot wins!" << endl;
            break;
        }

        if (isBoardFull(board)) {
            printBoard(board);
            cout << "It's a tie!" << endl;
            break;
        }
    }

    return 0;
}