#include<stdio.h>

// Function prototypes
void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};

    // Using pointer notation function
    printNumbers(arr, 6);

    // Using array notation function
    _printNumbers(arr, 6);

    return 0;
}

// Function accessing array using pointers
void printNumbers(int *arr, int n) {
    printf("Using pointer notation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d : %d\n", i, *(arr + i));
    }
}

// Function accessing array using array notation
void _printNumbers(int arr[], int n) {
    printf("Using array notation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d : %d\n", i, arr[i]);
    }
}
