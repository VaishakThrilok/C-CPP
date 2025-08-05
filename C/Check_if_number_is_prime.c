#include<stdio.h>

int main() {
    int n, isPrime = 1;  // Assume number is prime initially

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    // 1 is not a prime number
    if(n <= 1) {
        isPrime = 0;
    }

    // Checking factors from 2 to n-1
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = 0;  // Found a factor, hence not prime
            break;
        }
    }

    // Output result
    if(isPrime) {
        printf("%d is a Prime Number.\n", n);
    } else {
        printf("%d is NOT a Prime Number.\n", n);
    }

    return 0;
}
