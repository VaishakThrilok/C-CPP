#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;  // Pointer declaration and initialization
    int _age = *ptr;  // Dereferencing pointer to get value

    // Printing value
    printf("Value of _age: %d\n", _age);

    // Printing addresses
    printf("Address of age: %p\n", &age);
    printf("Value of ptr (Address of age): %p\n", ptr);
    printf("Address of ptr: %p\n", &ptr);

    // Accessing data using pointer
    printf("age using ptr: %d\n", *ptr);
    printf("age using &age: %d\n", *(&age));

    return 0;
}
