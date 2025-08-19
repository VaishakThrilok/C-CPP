#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
    float cgpa;
    char course[50];
};

int main(void) {
    FILE *fp;
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        // Name (NO getchar() before the first fgets)
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        if (s[i].name[0] == '\n') {
            // user just pressed enter (rare), read again
            fgets(s[i].name, sizeof(s[i].name), stdin);
        }
        // strip newline
        if (s[i].name[strlen(s[i].name) - 1] == '\n')
            s[i].name[strlen(s[i].name) - 1] = '\0';

        // Numbers
        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);

        // consume the newline left by scanf before next fgets
        getchar();

        // Course
        printf("Course: ");
        fgets(s[i].course, sizeof(s[i].course), stdin);
        if (s[i].course[strlen(s[i].course) - 1] == '\n')
            s[i].course[strlen(s[i].course) - 1] = '\0';
    }

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Name\t\tMarks\tCGPA\tCourse\n");
    fprintf(fp, "------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        fprintf(fp, "%s\t%d\t%.2f\t%s\n",
                s[i].name, s[i].marks, s[i].cgpa, s[i].course);
    }
    fclose(fp);

    printf("\nData of 5 students written to students.txt successfully.\n");
    return 0;
}
