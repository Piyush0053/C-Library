
#include <stdio.h>

int main() {
    int asciiCode;

    printf("Enter the ASCII code (integer value): ");
    scanf("%d", &asciiCode);

    printf("The character corresponding to ASCII code %d is: %c\n", asciiCode, (char)asciiCode);

    return 0;
}
