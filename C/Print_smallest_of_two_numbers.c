#include<stdio.h>

int main() {
    int a, b;  // Variables to store two numbers

    // Taking input for two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Checking which number is smaller
    if(a < b) {
        printf("%d is the smallest number.\n", a);
    } else if(b < a) {
        printf("%d is the smallest number.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
