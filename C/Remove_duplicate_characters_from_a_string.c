#include<stdio.h>
#include<string.h>

int main() {
    char str[100], result[100];
    int freq[256] = {0};
    int j = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Build result string without duplicates
    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(int)str[i]] == 0) {
            result[j++] = str[i];
            freq[(int)str[i]] = 1;
        }
    }

    result[j] = '\0';

    // Output
    printf("String after removing duplicates: %s\n", result);

    return 0;
}
