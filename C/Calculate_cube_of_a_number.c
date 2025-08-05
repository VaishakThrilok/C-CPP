#include<stdio.h>

int main() {
    int n;  // Variable to store input number

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculating cube using formula: n * n * n
    int cube = n * n * n;

    // Printing the cube of the number
    printf("Cube of %d is: %d\n", n, cube);

    return 0;
}
