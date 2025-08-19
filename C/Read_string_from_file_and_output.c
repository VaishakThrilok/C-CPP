#include <stdio.h>

int main(void) {
    FILE *fp;
    char str[200];

    fp = fopen("Test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    if (fgets(str, sizeof(str), fp) != NULL) {
        printf("String from file: %s", str);
    } else {
        printf("File is empty or could not read.\n");
    }

    fclose(fp);
    return 0;
}
