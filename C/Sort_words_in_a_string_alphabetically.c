#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    char words[50][50], temp[50];
    int wordCount = 0;

    // Input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Split into words
    int i = 0, j = 0, k = 0;
    while(str[i] != '\0') {
        if(str[i] != ' ') {
            words[wordCount][j++] = str[i];
        } else {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
        i++;
    }
    words[wordCount][j] = '\0';
    wordCount++;

    // Bubble sort
    for(i = 0; i < wordCount - 1; i++) {
        for(j = i + 1; j < wordCount; j++) {
            if(strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Output
    printf("Words in alphabetical order:\n");
    for(i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
