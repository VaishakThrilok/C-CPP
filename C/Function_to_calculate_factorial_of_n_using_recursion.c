#include<stdio.h>

// Function declaration (prototype)
int factorial(int n);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Factorial is: %d\n", factorial(n));

    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    int factnm1 = factorial(n - 1);  // Recursive call
    int factn = factnm1 * n;

    return factn;
}
