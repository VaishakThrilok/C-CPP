#include<stdio.h>

void swap(int a, int b);           // Call by Value
void _swap(int* a, int* b);        // Call by Reference (using pointers)

int main() {
    int x = 3, y = 5;

    // Call by Value (Won't swap in main)
    swap(x, y);
    printf("After call by value -> x = %d, y = %d\n", x, y);

    // Call by Reference (Will swap in main)
    _swap(&x, &y);
    printf("After call by reference -> x = %d, y = %d\n", x, y);

    return 0;
}

// Function using Call by Value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function using Call by Reference (Pointers)
void _swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
