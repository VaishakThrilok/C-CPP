#include<stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 12) {
        printf("Child\n");
    } else if(age < 18) {
        printf("Teenager\n");
    } else {
        printf("Adult\n");
    }

    return 0;
}
