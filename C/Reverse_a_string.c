#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    // Input a string using fgets
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Print string in reverse
    printf("Reversed string: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
