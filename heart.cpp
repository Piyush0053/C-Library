#include <iostream>
#include <cmath>
#include <string>

int main() {
    int i, j;
    int n = 15; // Adjust the value of 'n' to change the size of the heart

    // Loop for the upper part of the heart
    for (i = n / 2; i <= n; i += 2) {
        // Print leading spaces
        for (j = 1; j < n - i; j += 2) {
            std::cout << " ";
        }

        // Print left side of the heart
        for (j = 1; j <= i; j++) {
            // Print '*' at the beginning and end of the row
            if (j == 1 || j == i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }

        // Print middle spaces
        for (j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Print right side of the heart
        for (j = 1; j <= i; j++) {
            // Print '*' at the beginning and end of the row
            if (j == 1 || j == i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }

        // Print the message "I LOVE YOU" in the center
        if (i == n) {
            std::string message = "I LOVE YOU";
            int messageWidth = message.length();
            int padding = (2 * n - messageWidth) / 2;

            for (j = 1; j <= padding; j++) {
                std::cout << " ";
            }

            std::cout << message;

            for (j = 1; j <= padding; j++) {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    // Loop for the lower part of the heart
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            std::cout << " ";
        }

        // Print left side of the heart
        for (j = 1; j <= (i * 2) - 1; j++) {
            // Print '*' at the beginning and end of the row
            if (j == 1 || j == (i * 2) - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
