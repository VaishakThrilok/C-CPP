#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float cgpa;
};

int main(void) {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // consume newline

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        getchar(); // consume newline for next fgets
    }

    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].cgpa > s[topperIndex].cgpa) {
            topperIndex = i;
        }
    }

    printf("\nStudent with highest CGPA:\n");
    printf("Name: %s", s[topperIndex].name);
    printf("Roll: %d\n", s[topperIndex].roll);
    printf("CGPA: %.2f\n", s[topperIndex].cgpa);

    return 0;
}
