#include<stdio.h>
#include<string.h>

// Function to check if character exists in string
void checkChar(char str[], char ch) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Character '%c' is present!\n", ch);
            return;
        }
    }
    printf("Character '%c' is NOT present :(\n", ch);
}

int main() {
    char str[] = "Vaishak";
    char ch;

    printf("Enter character to search: ");
    scanf(" %c", &ch);  // Space before %c to handle buffer newline

    checkChar(str, ch);

    return 0;
}
