#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int special = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Count special characters
    for(int i = 0; str[i] != '\0'; i++) {
        if( !( (str[i] >= 'a' && str[i] <= 'z') ||
               (str[i] >= 'A' && str[i] <= 'Z') ||
               (str[i] >= '0' && str[i] <= '9') ||
               str[i] == ' ' ) ) {
            special++;
        }
    }

    // Output
    printf("Number of special characters: %d\n", special);

    return 0;
}
