#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    char longest[100];
    int maxLen = 0, currLen = 0, start = 0;

    // Input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            currLen++;
        } else {
            if(currLen > maxLen) {
                maxLen = currLen;
                strncpy(longest, &str[i - currLen], currLen);
                longest[currLen] = '\0';
            }
            currLen = 0;
        }
    }

    // Check last word
    if(currLen > maxLen) {
        maxLen = currLen;
        strncpy(longest, &str[i - currLen], currLen);
        longest[currLen] = '\0';
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
