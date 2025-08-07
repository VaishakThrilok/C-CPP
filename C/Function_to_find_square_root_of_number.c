#include<stdio.h>
#include<math.h>  // For sqrt() function

// Function to calculate square root
float findSquareRoot(int n) {
    return sqrt(n);
}

int main() {
    int n;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling function and printing result
    printf("Square root of %d is: %.2f\n", n, findSquareRoot(n));

    return 0;
}
