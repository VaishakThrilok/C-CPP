#include<stdio.h>

int main() {
    int a, b;  // Variables to store length and breadth of rectangle

    // Taking user input for length and breadth
    printf("Enter length (a): ");
    scanf("%d", &a);

    printf("Enter breadth (b): ");
    scanf("%d", &b);

    // Calculating perimeter using formula: 2*(a + b)
    int perimeter = 2 * (a + b);

    // Printing the perimeter
    printf("Perimeter of rectangle: %d\n", perimeter);

    return 0;
}
