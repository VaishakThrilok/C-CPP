#include<stdio.h>

void square(int n);         // Call by Value
void _square(int* n);       // Call by Reference (using pointer)

int main() {
    int number = 4;

    // Call by Value
    square(number);
    printf("After call by value, number = %d\n", number);

    // Call by Reference
    _square(&number);
    printf("After call by reference, number = %d\n", number);

    return 0;
}

// Function using Call by Value
void square(int n) {
    n = n * n;
    printf("Square (call by value) is: %d\n", n);
}

// Function using Call by Reference
void _square(int* n) {
    *n = (*n) * (*n);
    printf("Square (call by reference) is: %d\n", *n);
}
