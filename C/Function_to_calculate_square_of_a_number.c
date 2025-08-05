#include<stdio.h>

// Function declaration (prototype)
int calcSquare(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square is: %d\n", calcSquare(n));

    return 0;
}

// Function definition
int calcSquare(int n) {
    return n * n;
}
