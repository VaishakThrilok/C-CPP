#include<stdio.h>

int main() {
    printf("%d \n", 4 == 4);   // 1 (true)
    printf("%d \n", 4 < 3);    // 0 (false)
    printf("%d \n", 3 < 4);    // 1 (true)
    printf("%d \n", 4 < 4);    // 0 (false)
    printf("%d \n", 4 <= 4);   // 1 (true)
    printf("%d \n", 4 > 3);    // 1 (true)
    printf("%d \n", 3 > 4);    // 0 (false)
    printf("%d \n", 4 > 4);    // 0 (false)
    printf("%d \n", 4 >= 4);   // 1 (true)
    printf("%d \n", 4 != 4);   // 0 (false)
    printf("%d \n", 3 != 4);   // 1 (true)

    return 0;
}
