#include<stdio.h>
#include<string.h>

// Structure declaration
struct student {
    char name[100];
    int roll;
    float cgpa;
};

// Function to print student info
void printInfo(struct student s1) {
    printf("Student Info:\n");
    printf("Name = %s\n", s1.name);
    printf("Roll No = %d\n", s1.roll);
    printf("CGPA = %.2f\n", s1.cgpa);
}

int main() {
    // Structure initialization
    struct student s1;
    strcpy(s1.name, "Vaishak");
    s1.roll = 64;
    s1.cgpa = 9.2;

    // Accessing structure members
    printf("Student Name: %s\n", s1.name);
    printf("Student Roll: %d\n", s1.roll);
    printf("Student CGPA: %.2f\n", s1.cgpa);

    // Array of Structures
    struct student IT[60];
    struct student COE[60];
    struct student ECE[60];

    // Initializing structure with values directly
    struct student s2 = {"Sushank", 1552, 8.6};
    struct student s3 = {0};  // Default values (empty/zero)

    printf("Roll No of s2: %d\n", s2.roll);
    printf("Roll No of s3: %d\n", s3.roll);

    // Pointer to structure
    struct student *ptr = &s1;
    printf("Access via (*ptr).name: %s\n", (*ptr).name);
    printf("Access via ptr->roll: %d\n", ptr->roll);

    // Passing structure to function
    printInfo(s1);

    return 0;
}
