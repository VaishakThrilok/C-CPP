#include<stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max with first element
    int max = arr[0];

    // Loop through array to find max
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Print result
    printf("The largest number is: %d\n", max);

    return 0;
}
