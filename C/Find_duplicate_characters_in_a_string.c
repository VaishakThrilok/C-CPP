#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Count frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Print duplicates
    printf("Duplicate characters:\n");
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 1) {
            printf("'%c' appears %d times\n", i, freq[i]);
        }
    }

    return 0;
}
