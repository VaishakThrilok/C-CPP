#include<stdio.h>

int main() {
    char alphabet = 'A';
    char *ptr = &alphabet;

    printf("Alphabets from A to Z using pointer:\n");
    while(*ptr <= 'Z') {
        printf("%c ", *ptr);
        (*ptr)++;  // Move to next character
    }
    printf("\n");

    return 0;
}
