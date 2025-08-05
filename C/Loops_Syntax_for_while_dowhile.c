#include<stdio.h>

int main() {
    // For Loop: Prints numbers from 1 to 100
    for(int i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }

    // While Loop: Prints numbers from 1 to 100
    int i = 1;
    while(i <= 100) {
        printf("%d\n", i);
        i++;
    }

    // Do-While Loop: Prints numbers from 1 to 100
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while(i <= 100);

    return 0;
}
