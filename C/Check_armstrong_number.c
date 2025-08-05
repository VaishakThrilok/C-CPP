#include<stdio.h>
#include<math.h>  // For pow() function

int main() {
    int n, original, remainder, result = 0, digits = 0;

    // Taking number input
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while(temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of (digit^digits)
    temp = n;
    while(temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if Armstrong
    if(result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}
