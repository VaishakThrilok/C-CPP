#include<stdio.h>

int main() {
    printf("%d \n", 3 < 4 && 3 < 5);   // 1 (true)
    printf("%d \n", 3 < 4 && 5 < 4);   // 0 (false)
    printf("%d \n", 3 > 4 && 5 > 4);   // 0 (false)
    printf("%d \n", 3 < 4 || 5 < 4);   // 1 (true)
    printf("%d \n", !(3 < 4 && 3 < 5)); // 0 (false)
    printf("%d \n", !(4 < 3 || 5 < 3)); // 1 (true)

    return 0;
}
