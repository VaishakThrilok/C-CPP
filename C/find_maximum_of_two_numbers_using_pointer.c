#include<stdio.h>

// Function to find maximum using pointers
void findMaximum(int *a, int *b) {
    if(*a > *b) {
        printf("Maximum is: %d\n", *a);
    } else if(*b > *a) {
        printf("Maximum is: %d\n", *b);
    } else {
        printf("Both numbers are equal: %d\n", *a);
    }
}

int main() {
    int x, y;

    // Taking input
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    // Passing addresses to function
    findMaximum(&x, &y);

    return 0;
}
