#include<stdio.h>

int main() {
    int n, x, count = 0;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Array declaration

    // Taking array input
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking number x to count
    printf("Enter number to count occurrences (x): ");
    scanf("%d", &x);

    // Counting occurrences of x
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            count++;
        }
    }

    // Printing result
    printf("Number %d occurs %d times in the array.\n", x, count);

    return 0;
}
