#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;   // Pointer to age
    int _age = 25;
    int *_ptr = &_age; // Another pointer to _age

    printf("Initial ptr address: %u\n", ptr);

    ptr++;  // Pointer arithmetic (move to next integer block)
    printf("After ptr++ address: %u\n", ptr);

    ptr--;  // Bring it back to original
    printf("After ptr-- address: %u\n", ptr);

    ptr = ptr - _ptr;  // Pointer subtraction (computes index difference)
    printf("Difference between ptr and _ptr: %u\n", ptr);

    ptr = &_age;  // Reset ptr to address of _age
    printf("ptr == _ptr: %d\n", ptr == _ptr);

    return 0;
}
