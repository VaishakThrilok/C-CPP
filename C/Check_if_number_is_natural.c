#include<stdio.h>

int main() {
    int n;  // Variable to store input number

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Natural numbers start from 1
    if(n >= 1) {
        printf("%d is a Natural Number.\n", n);
    } else {
        printf("%d is NOT a Natural Number.\n", n);
    }

    return 0;
}
