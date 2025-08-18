#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float cgpa;
};

struct Teacher {
    char name[50];
    char department[50];
};

struct Staff {
    char name[50];
    char role[50];
};

int main(void) {
    struct Student s;
    struct Teacher t;
    struct Staff st;

    printf("Enter student details:\n");
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("CGPA: ");
    scanf("%f", &s.cgpa);
    getchar(); // consume leftover newline

    printf("\nEnter teacher details:\n");
    printf("Name: ");
    fgets(t.name, sizeof(t.name), stdin);
    printf("Department: ");
    fgets(t.department, sizeof(t.department), stdin);

    printf("\nEnter staff details:\n");
    printf("Name: ");
    fgets(st.name, sizeof(st.name), stdin);
    printf("Role: ");
    fgets(st.role, sizeof(st.role), stdin);

    printf("\n--- College Directory ---\n");
    printf("Student: %s Roll: %d, CGPA: %.2f\n", s.name, s.roll, s.cgpa);
    printf("Teacher: %s Department: %s\n", t.name, t.department);
    printf("Staff: %s Role: %s\n", st.name, st.role);

    return 0;
}
