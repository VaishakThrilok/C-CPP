#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};

    // Input
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Check length
    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams (different lengths)\n");
        return 0;
    }

    // Count frequencies
    for(int i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }

    // Compare frequencies
    int isAnagram = 1;
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram) {
        printf("The strings are Anagrams\n");
    } else {
        printf("The strings are NOT Anagrams\n");
    }

    return 0;
}
