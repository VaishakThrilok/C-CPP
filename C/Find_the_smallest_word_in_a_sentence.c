#include<stdio.h>
#include<string.h>

int main() {
    char str[200], smallest[50];
    char word[50];
    int i = 0, j = 0, minLen = 999;

    // Input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while(1) {
        char ch = str[i];
        if(ch != ' ' && ch != '\0') {
            word[j++] = ch;
        } else {
            word[j] = '\0';
            int len = strlen(word);
            if(len < minLen && len > 0) {
                minLen = len;
                strcpy(smallest, word);
            }
            j = 0;
        }

        if(ch == '\0') {
            break;
        }
        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Length: %d\n", minLen);

    return 0;
}
