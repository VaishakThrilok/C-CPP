#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    int count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Count words
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            count++;
        }
    }

    // Add one to count the last word (if string is not empty)
    if(strlen(str) > 0) {
        count++;
    }

    printf("Total number of words: %d\n", count);

    return 0;
}
