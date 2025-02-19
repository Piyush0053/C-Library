#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Choice { ROCK = 1, PAPER, SCISSORS };

Choice getComputerChoice() {
    return static_cast<Choice>(rand() % 3 + 1);  // Random choice between 1 and 3
}

Choice getUserChoice() {
    int choice;
    cout << "Enter your choice: \n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Your choice: ";
    cin >> choice;

    while (choice < 1 || choice > 3) {
        cout << "Invalid choice! Please choose between 1 and 3.\n";
        cin >> choice;
    }

    return static_cast<Choice>(choice);
}

void determineWinner(Choice user, Choice computer) {
    if (user == computer) {
        cout << "It's a tie!\n";
    } else if ((user == ROCK && computer == SCISSORS) || 
               (user == PAPER && computer == ROCK) || 
               (user == SCISSORS && computer == PAPER)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
}

int main() {
    srand(time(0));  // Seed the random number generator with the current time

    cout << "Welcome to Rock, Paper, Scissors Game!\n";
    
    // Loop for playing multiple rounds
    char playAgain;
    do {
        Choice userChoice = getUserChoice();
        Choice computerChoice = getComputerChoice();

        cout << "You chose: ";
        switch (userChoice) {
            case ROCK: cout << "Rock\n"; break;
            case PAPER: cout << "Paper\n"; break;
            case SCISSORS: cout << "Scissors\n"; break;
        }

        cout << "Computer chose: ";
        switch (computerChoice) {
            case ROCK: cout << "Rock\n"; break;
            case PAPER: cout << "Paper\n"; break;
            case SCISSORS: cout << "Scissors\n"; break;
        }

        determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
