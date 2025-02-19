#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

vector<vector<int>> puzzle = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
int empty_x = 2, empty_y = 2;

void displayPuzzle() {
    for (const auto &row : puzzle) {
        for (int num : row) {
            if (num == 0)
                cout << "   ";
            else
                cout << " " << num << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

bool moveTile(char direction) {
    int new_x = empty_x, new_y = empty_y;
    if (direction == 'w' && empty_x > 0) new_x--;
    else if (direction == 's' && empty_x < 2) new_x++;
    else if (direction == 'a' && empty_y > 0) new_y--;
    else if (direction == 'd' && empty_y < 2) new_y++;
    else return false;

    swap(puzzle[empty_x][empty_y], puzzle[new_x][new_y]);
    empty_x = new_x;
    empty_y = new_y;
    return true;
}

bool isSolved() {
    vector<vector<int>> goal = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
    return puzzle == goal;
}

void shufflePuzzle() {
    for (int i = 0; i < 100; i++) {
        char moves[] = {'w', 'a', 's', 'd'};
        moveTile(moves[rand() % 4]);
    }
}

void playGame() {
    shufflePuzzle();
    while (!isSolved()) {
        displayPuzzle();
        cout << "Move tile (w: up, s: down, a: left, d: right): ";
        char move;
        cin >> move;
        if (!moveTile(move)) {
            cout << "Invalid move! Try again.\n";
        }
    }
    displayPuzzle();
    cout << "Congratulations! You solved the puzzle!\n";
}

int main() {
    srand(time(0));
    playGame();
    return 0;
}
