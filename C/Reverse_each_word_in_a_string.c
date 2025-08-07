#include<stdio.h>
#include<string.h>

void reverse_word(char str[], int start, int end) {
    char temp;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    str[len] = ' '; // Add space at end to process last word
    str[len + 1] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            reverse_word(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed each word: %s\n", str);

    return 0;
}
