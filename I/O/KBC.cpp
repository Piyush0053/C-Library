#include <iostream>
#include <vector>
using namespace std;

struct Question {
    string question;
    vector<string> options;
    char correctAnswer;
};

vector<Question> questions = {
    {"What is the capital of India?", {"A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai"}, 'B'},
    {"Who wrote 'Hamlet'?", {"A. Charles Dickens", "B. William Shakespeare", "C. Jane Austen", "D. Mark Twain"}, 'B'},
    {"What is 2 + 2?", {"A. 3", "B. 4", "C. 5", "D. 6"}, 'B'},
    {"Which planet is known as the Red Planet?", {"A. Venus", "B. Mars", "C. Jupiter", "D. Saturn"}, 'B'},
    {"What is the chemical symbol for water?", {"A. H2O", "B. O2", "C. CO2", "D. H2"}, 'A'}
};

void playGame() {
    int prizeMoney = 0;
    for (size_t i = 0; i < questions.size(); i++) {
        cout << "\nQuestion " << (i + 1) << ": " << questions[i].question << "\n";
        for (const string &option : questions[i].options) {
            cout << option << "\n";
        }
        cout << "Enter your answer (A, B, C, D): ";
        char answer;
        cin >> answer;
        answer = toupper(answer);
        if (answer == questions[i].correctAnswer) {
            prizeMoney += 1000;
            cout << "Correct! You have won Rs." << prizeMoney << "\n";
        } else {
            cout << "Wrong answer! Game Over. You won Rs." << prizeMoney << "\n";
            return;
        }
    }
    cout << "Congratulations! You won the game with Rs." << prizeMoney << "\n";
}

int main() {
    cout << "Welcome to Kaun Banega Crorepati!\n";
    playGame();
    return 0;
}
