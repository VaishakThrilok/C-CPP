#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("All suffixes of the string are:\n");

    for(int i = 0; str[i] != '\0'; i++) {
        for(int j = i; str[j] != '\0'; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
