#include<stdio.h>

int main() {
    char source[100], destination[100];
    char *srcPtr, *destPtr;

    // Input source string
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';  // Remove newline

    // Initialize pointers
    srcPtr = source;
    destPtr = destination;

    // Copy character by character using pointers
    while(*srcPtr != '\0') {
        *destPtr = *srcPtr;
        srcPtr++;
        destPtr++;
    }
    *destPtr = '\0'; // Null-terminate the destination string

    // Output copied string
    printf("Copied string: %s\n", destination);

    return 0;
}
