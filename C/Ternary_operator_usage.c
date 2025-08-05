#include<stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    // Ternary Operator for age check
    age >= 18 ? printf("Adult\n") : printf("Not Adult\n");

    int number = 7;
    int luckyNumber = 7;

    // Ternary Operator for lucky number check
    number == luckyNumber ? printf("You are lucky!\n") : printf("You are not lucky.\n");

    return 0;
}
