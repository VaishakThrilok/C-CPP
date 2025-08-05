#include<stdio.h>

int main() {
    int start, end;

    // Input range from user
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Iterate through the range
    for(int num = start; num <= end; num++) {
        int isPrime = 1;

        if(num <= 1) {
            isPrime = 0;  // Numbers <= 1 are not prime
        }

        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = 0;  // Found a factor
                break;
            }
        }

        if(isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
