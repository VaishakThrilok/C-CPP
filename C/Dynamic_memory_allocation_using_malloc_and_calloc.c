#include <stdio.h>
#include <stdlib.h>

int main() {
    // sizeof operator
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));

    // malloc example
    // int *ptr;
    // ptr = (int *) malloc(5 * sizeof(int));
    // for(int i = 0; i < 5; i++) {
    //     scanf("%d", &ptr[i]);
    // }
    // for(int i = 0; i < 5; i++) {
    //     printf("number %d = %d\n", i + 1, ptr[i]);
    // }

    // calloc example
    int *ptr = (int *) calloc(5, sizeof(int));
    for(int i = 0; i < 5; i++) {
        printf("number %d = %d\n", i + 1, ptr[i]);
    }

    // free allocated memory
    free(ptr);

    return 0;
}
