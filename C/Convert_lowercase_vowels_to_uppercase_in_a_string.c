#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            str[i] = str[i] - 'a' + 'A';  // convert to uppercase
        }
    }

    printf("Result: %s", str);

    return 0;
}
