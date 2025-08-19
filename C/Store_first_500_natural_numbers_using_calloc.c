#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr;
    int i;

    arr = (int*)calloc(500, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < 500; i++) {
        arr[i] = i + 1;  // 1..500
    }

    // print a small check
    printf("First: %d  Middle: %d  Last: %d\n", arr[0], arr[249], arr[499]);

    free(arr);
    return 0;
}
