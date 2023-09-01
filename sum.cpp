#include<iostream>
using namespace std;

// Function to find the maximum of four integers
int findMax(int a, int b, int c, int d) {
    int maxInteger = a;
    if (b > maxInteger) {
        maxInteger = b;
    }
    if (c > maxInteger) {
        maxInteger = c;
    }
    if (d > maxInteger) {
        maxInteger = d;
    }
    return maxInteger;
}

int main() {
    int a, b, c, d;
    
   a=3;b=4;c=6;d=5;

    // Call the function to find the maximum value
    int maxInteger = findMax(a, b, c, d);

    // Print the maximum value
    cout << maxInteger << endl;

    return 0;
}
