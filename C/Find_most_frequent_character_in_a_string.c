#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Count frequency
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find max frequency
    for(int i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    // Output
    printf("Most frequent character: '%c' (appeared %d times)\n", maxChar, maxFreq);

    return 0;
}
