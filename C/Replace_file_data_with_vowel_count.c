#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char str[200];
    int vowels = 0;

    fp = fopen("number_of_vowels.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    if (fgets(str, sizeof(str), fp) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            char c = str[i];
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
                vowels++;
            }
        }
    }
    fclose(fp);

    fp = fopen("number_of_vowels.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "%d", vowels);
    fclose(fp);

    printf("Number of vowels (%d) written to file successfully.\n", vowels);

    return 0;
}
