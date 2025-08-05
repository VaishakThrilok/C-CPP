#include<stdio.h>
#include<string.h>

int main() {
    // String declaration using double quotes (automatically adds '\0')
    char name[] = "Shradha Khapra";

    // String declaration using character array
    char course[] = {'a','p','n','a',' ','c','o','l','l','e','g','e','\0'};

    // Printing string using loop
    printf("Printing using loop: ");
    for(int i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    // Printing string using pointer traversal
    printf("Printing using pointer: ");
    for(char *ptr = name; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    printf("\n");

    // Printing string using %s
    printf("Printing using %%s: %s\n", name);

    // Input a single word string
    char firstName[40];
    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Your first name is: %s\n", firstName);

    // Input full name using fgets
    char fullName[40];
    printf("Enter full name: ");
    getchar();  // Clear newline buffer before fgets
    fgets(fullName, sizeof(fullName), stdin);
    printf("Your full name is: ");
    puts(fullName);

    return 0;
}
