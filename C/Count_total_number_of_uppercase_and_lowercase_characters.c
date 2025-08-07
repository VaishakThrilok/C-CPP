#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int uppercase = 0, lowercase = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Count upper and lower case characters
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        }
    }

    // Output
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);

    return 0;
}
