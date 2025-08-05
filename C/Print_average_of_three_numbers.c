#include<stdio.h>

int main() {
    int a, b, c;  // Variables to store three numbers

    // Taking input for three numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Calculating average
    float average = (a + b + c) / 3.0;

    // Printing the average
    printf("Average of %d, %d, %d is: %.2f\n", a, b, c, average);

    return 0;
}
