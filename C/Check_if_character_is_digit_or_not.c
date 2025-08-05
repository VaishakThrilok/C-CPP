#include<stdio.h>

int main() {
    char ch;  // Variable to store input character

    // Taking character input
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note: Space before %c to clear buffer

    // Checking if character is a digit using ASCII values
    if(ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is NOT a digit.\n", ch);
    }

    return 0;
}
