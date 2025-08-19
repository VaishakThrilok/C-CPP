#include <stdio.h>

#define MAX 100

struct Student {
    char name[100];
    int roll;
    float cgpa;
};

int main(void) {
    struct Student students[MAX];
    int n;

    printf("Enter number of students (1-%d): ", MAX);
    scanf("%d", &n);
    if (n < 1) n = 1;
    if (n > MAX) n = MAX;
    getchar(); // consume newline left by scanf

    for (int i = 0; i < n; i++) {
        printf("\n-- Student %d --\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);

        getchar(); // consume newline after CGPA for next fgets
    }

    printf("\n===== STUDENT LIST =====\n");
    for (int i = 0; i < n; i++) {
        printf("%d) Name: %sRoll: %d | CGPA: %.2f\n",
               i + 1, students[i].name, students[i].roll, students[i].cgpa);
    }

    return 0;
}
