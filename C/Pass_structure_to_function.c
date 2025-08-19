#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float cgpa;
};

void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);
    printf("CGPA: %.2f\n", s.cgpa);
}

int main(void) {
    struct Student s;

    printf("Enter student details:\n");
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("CGPA: ");
    scanf("%f", &s.cgpa);

    printStudent(s);

    return 0;
}
