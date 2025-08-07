#include<stdio.h>
#include<string.h>

int main() {
    char str[200], word[50], smallest[50], largest[50];
    int i = 0, j = 0, len;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);
    str[len] = ' '; // Add trailing space to process last word
    str[len + 1] = '\0';

    int firstWord = 1;

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            word[j++] = str[i];
        } else {
            if(j > 0) {
                word[j] = '\0';

                if(firstWord) {
                    strcpy(smallest, word);
                    strcpy(largest, word);
                    firstWord = 0;
                } else {
                    if(strlen(word) < strlen(smallest)) {
                        strcpy(smallest, word);
                    }
                    if(strlen(word) > strlen(largest)) {
                        strcpy(largest, word);
                    }
                }

                j = 0; // Reset word
            }
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
