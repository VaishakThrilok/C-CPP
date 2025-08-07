#include<stdio.h>

// Function to calculate power (base^exp)
int customPow(int base, int exp) {
    int result = 1;

    for(int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    // Taking input
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calling custom power function
    printf("%d raised to power %d is: %d\n", base, exponent, customPow(base, exponent));

    return 0;
}
