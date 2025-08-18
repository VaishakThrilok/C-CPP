#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    char words[50][50];
    int count[50] = {0};
    int wordCount = 0;

    // Input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Split words manually
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

    // Count frequency
    for(i = 0; i < wordCount; i++) {
        for(j = i; j < wordCount; j++) {
            if(strcmp(words[i], words[j]) == 0) {
                count[i]++;
            }
        }
    }

    // Find max frequency
    int max = count[0], index = 0;
    for(i = 1; i < wordCount; i++) {
        if(count[i] > max) {
            max = count[i];
            index = i;
        }
    }

    printf("Most frequent word: %s\n", words[index]);
    printf("Frequency: %d\n", max);

    return 0;
}
