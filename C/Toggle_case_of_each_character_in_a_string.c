#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Toggle case
    for(int i = 0; str[i] != '\0'; i++) {
        // If lowercase, convert to uppercase
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // If uppercase, convert to lowercase
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    // Output
    printf("String after toggling case: %s\n", str);

    return 0;
}
