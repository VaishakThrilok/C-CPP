#include<stdio.h>
#include<string.h>

int main() {
    char str[200], find[50], replace[50];
    char words[50][50];
    int wordCount = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Word to find
    printf("Enter the word to replace: ");
    fgets(find, sizeof(find), stdin);
    find[strcspn(find, "\n")] = '\0';

    // Replacement word
    printf("Enter the replacement word: ");
    fgets(replace, sizeof(replace), stdin);
    replace[strcspn(replace, "\n")] = '\0';

    // Split sentence into words
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

    // Replace the word
    for(i = 0; i < wordCount; i++) {
        if(strcmp(words[i], find) == 0) {
            strcpy(words[i], replace);
        }
    }

    // Print new sentence
    printf("Updated sentence: ");
    for(i = 0; i < wordCount; i++) {
        printf("%s", words[i]);
        if(i != wordCount - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
