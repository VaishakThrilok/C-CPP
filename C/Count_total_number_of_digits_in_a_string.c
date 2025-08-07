#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int digitCount = 0;

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Count digits
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        }
    }

    // Output
    printf("Total number of digits: %d\n", digitCount);

    return 0;
}
