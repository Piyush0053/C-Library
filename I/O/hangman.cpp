#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

string words[] = {"computer", "programming", "hangman", "developer", "keyboard"};
string chosen_word;
string guessed_word;
vector<char> incorrect_guesses;
int attempts = 6;

void chooseWord() {
    chosen_word = words[rand() % 5];
    guessed_word = string(chosen_word.length(), '_');
}

void displayGame() {
    cout << "\nWord: " << guessed_word << "\n";
    cout << "Incorrect guesses: ";
    for (char c : incorrect_guesses) cout << c << " ";
    cout << "\nAttempts left: " << attempts << "\n";
}

bool updateWord(char guess) {
    bool found = false;
    for (size_t i = 0; i < chosen_word.length(); i++) {
        if (chosen_word[i] == guess) {
            guessed_word[i] = guess;
            found = true;
        }
    }
    return found;
}

void playGame() {
    chooseWord();
    while (attempts > 0 && guessed_word != chosen_word) {
        displayGame();
        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        if (!updateWord(guess)) {
            incorrect_guesses.push_back(guess);
            attempts--;
        }
    }
    
    displayGame();
    if (guessed_word == chosen_word) {
        cout << "Congratulations! You guessed the word!\n";
    } else {
        cout << "Game Over! The word was: " << chosen_word << "\n";
    }
}

int main() {
    srand(time(0));
    playGame();
    return 0;
}
