#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char current_marker;
int current_player;

void drawBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << "\n";
        if (i < 2) cout << "-----------\n";
    }
    cout << "\n";
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] == ' ') {
        board[row][col] = current_marker;
        return true;
    }
    return false;
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true;
    return false;
}

void swapPlayer() {
    current_player = (current_player == 1) ? 2 : 1;
    current_marker = (current_marker == 'X') ? 'O' : 'X';
}

void playGame() {
    current_player = 1;
    current_marker = 'X';
    int moves = 0;
    while (moves < 9) {
        drawBoard();
        int slot;
        cout << "Player " << current_player << "'s turn. Enter slot (1-9): ";
        cin >> slot;
        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Invalid move! Try again.\n";
            continue;
        }
        moves++;
        if (checkWin()) {
            drawBoard();
            cout << "Player " << current_player << " wins!\n";
            return;
        }
        swapPlayer();
    }
    drawBoard();
    cout << "It's a tie!\n";
}

int main() {
    playGame();
    return 0;
}
