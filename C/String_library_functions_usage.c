#include<stdio.h>
#include<string.h>

int main() {
    // strlen() - Get length of string
    char name[] = "Vaishak";
    int length = strlen(name);
    printf("Length of name: %d\n", length);

    // strcpy() - Copy string
    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    printf("Copied string (newVal): %s\n", newVal);

    // strcat() - Concatenate strings
    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    printf("Concatenated string: %s\n", firstStr);

    // strcmp() - Compare strings
    char str1[] = "Apple";
    char str2[] = "Banana";
    int cmpResult = strcmp(str1, str2);
    printf("Comparison result of str1 and str2: %d\n", cmpResult);

    return 0;
}
