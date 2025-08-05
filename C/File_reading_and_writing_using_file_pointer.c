#include<stdio.h>

int main() {
    FILE *fptr;
    char ch;

    // Reading from file "Test.txt"
    fptr = fopen("Test.txt", "r");
    if(fptr == NULL) {
        printf("File doesn't exist!\n");
    } else {
        fscanf(fptr, "%c", &ch);
        printf("Character from file: %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Next character from file: %c\n", ch);
        fclose(fptr);
    }

    // Writing to file "NewFile.txt"
    ch = 'M';
    fptr = fopen("NewFile.txt", "w");
    fprintf(fptr, "%cANGO", ch);  // Writes 'MANGO'
    fclose(fptr);

    // Reading characters using fgetc
    fptr = fopen("NewFile.txt", "r");
    printf("Characters from NewFile.txt: ");
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    fclose(fptr);

    // Writing characters using fputc
    fptr = fopen("NewFile.txt", "w");
    fputc('a', fptr);
    fputc('p', fptr);
    fputc('p', fptr);
    fputc('l', fptr);
    fputc('e', fptr);
    fclose(fptr);

    // Reading entire file till EOF
    fptr = fopen("NewFile.txt", "r");
    printf("Reading NewFile.txt till EOF: ");
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);

    return 0;
}
