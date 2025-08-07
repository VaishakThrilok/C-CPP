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

    // Initialize min with first element
    int min = arr[0];

    // Loop through array to find min
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Print result
    printf("The smallest number is: %d\n", min);

    return 0;
}
