#include<stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;  // Add last digit to sum
        n /= 10;        // Remove last digit
    }
    return sum;
}

int main() {
    int n;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling function and printing result
    printf("Sum of digits of %d is: %d\n", n, sumOfDigits(n));

    return 0;
}
