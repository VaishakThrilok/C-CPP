#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    char result[100];
    int j = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Remove spaces
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    // Output
    printf("String without spaces: %s\n", result);

    return 0;
}
