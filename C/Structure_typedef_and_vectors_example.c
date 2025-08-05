#include<stdio.h>
#include<string.h>

// Typedef for student structure
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu;

// Typedef for ComputerEngineeringStudent
typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe;

// Structure for address
struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

// Structure for vector addition
struct vector {
    int x;
    int y;
};

// Function to calculate vector sum
void calcSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is: %d\n", sum.x);
    printf("Sum of y is: %d\n", sum.y);
}

// Typedef for BankAccount
typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc;

int main() {
    // Using typedef-ed struct for BankAccount
    acc acc1 = {123, "Vaishak"};
    acc acc2 = {124, "Sushank"};
    acc acc3 = {125, "Shreyas"};

    printf("Account 1 - No: %d, Name: %s\n", acc1.accountNo, acc1.name);
    printf("Account 2 - No: %d, Name: %s\n", acc2.accountNo, acc2.name);
    printf("Account 3 - No: %d, Name: %s\n", acc3.accountNo, acc3.name);

    // Vector Addition Example
    struct vector v1 = {3, 4};
    struct vector v2 = {1, 2};
    struct vector sum = {0, 0};

    calcSum(v1, v2, sum);

    return 0;
}
