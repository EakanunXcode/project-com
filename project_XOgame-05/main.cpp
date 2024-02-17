#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};//board ซึ่งเป็นอาร์เรย์ 2 มิติขนาด 3x3 แทนสถานะของแต่ละช่องในเกม โดยใช้อักขระช่องว่างเพื่อแทนช่องว่างในเกม.

void display_board() {//display_board() ใช้สำหรับแสดงตารางของเกมบน terminal โดยใช้ลูปเพื่อวาดตาราง 3x3 และแสดงสถานะของแต่ละช่อง.
    cout << "-------------\n" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

bool is_valid_move(int row, int col) {//is_valid_move(int row, int col) ใช้สำหรับตรวจสอบว่าการเลือกที่เลือกเคลื่อนที่ถูกต้องหรือไม่ โดยตรวจสอบว่าช่องที่ผู้เล่นเลือกไม่ได้ถูกเลือกไปแล้วหรือไม่ และไม่อยู่นอกขอบเขตของตาราง.
    if (row < 0 || row >= 3 || col < 0 || col >= 3)
        return false;
    if (board[row][col] != ' ')
        return false;
    return true;
}

bool check_win(char symbol) {//check_win(char symbol) ใช้สำหรับตรวจสอบว่ามีผู้ชนะหรือไม่ โดยตรวจสอบในทุกทิศทางที่เป็นไปได้ว่ามีเครื่องหมายเดียวกันอยู่แนวแทยงหรือแนวตั้งหรือไม่.
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return true;
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return true;
    }
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return true;
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return true;
    return false;
}

bool is_board_full() {//is_board_full() ใช้สำหรับตรวจสอบว่ากระดานเต็มแล้วหรือไม่ โดยตรวจสอบว่ามีช่องว่างในกระดานหรือไม่.
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main() {//main() เกมจะเริ่มต้นด้วยการแสดงบอร์ดและให้ผู้เล่นปัจจุบันเลือกเครื่องหมาย (X หรือ O) และใส่แถวและคอลัมน์ของการเล่นของพวกเขา โดยโค้ดจะทำการตรวจสอบว่าที่ผู้เล่นเลือกเคลื่อนที่ถูกต้องหรือไม่ และตรวจสอบว่ามีผู้ชนะหรือเกมเสมอหรือไม่ หากยังไม่จบเกมจะสลับผู้เล่นและเริ่มรอบใหม่.
    int row, col;
    char current_player = 'X';

    while (true) {
        display_board();

        cout << "Player " << current_player << ", enter your move (row and column): ";
        cin >> row >> col;

        if (is_valid_move(row, col)) {
            board[row][col] = current_player;
            if (check_win(current_player)) {
                display_board();
                cout << "Player " << current_player << " wins!" << endl;
                break;
            } else if (is_board_full()) {
                display_board();
                cout << "It's a draw!" << endl;
                break;
            }
            // Switch player
            current_player = (current_player == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;
}