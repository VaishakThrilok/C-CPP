#include<stdio.h>

int main() {
    int n;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Array declaration

    // Taking array input
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing array in reverse order
    printf("Array in reverse order:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
