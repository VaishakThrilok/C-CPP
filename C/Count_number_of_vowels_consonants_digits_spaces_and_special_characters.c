#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Vowel check
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Consonant check (A–Z or a–z)
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        // Digit check
        else if(ch >= '0' && ch <= '9') {
            digits++;
        }
        // Space
        else if(ch == ' ') {
            spaces++;
        }
        // Everything else
        else {
            special++;
        }
    }

    // Output
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);

    return 0;
}
