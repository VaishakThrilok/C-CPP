#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[50];
    int roll;
    float cgpa;
    struct Address addr;   // nested structure
};

int main(void) {
    struct Student s;

    printf("Enter student details:\n");
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("CGPA: ");
    scanf("%f", &s.cgpa);
    getchar(); // consume newline

    printf("City: ");
    fgets(s.addr.city, sizeof(s.addr.city), stdin);
    printf("Pincode: ");
    scanf("%d", &s.addr.pincode);

    printf("\n--- Student Information ---\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);
    printf("CGPA: %.2f\n", s.cgpa);
    printf("City: %s", s.addr.city);
    printf("Pincode: %d\n", s.addr.pincode);

    return 0;
}
