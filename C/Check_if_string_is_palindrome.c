#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Check palindrome manually (case-insensitive)
    for(i = 0, j = len - 1; i < j; i++, j--) {
        char ch1 = str[i];
        char ch2 = str[j];

        // Convert uppercase to lowercase manually
        if(ch1 >= 'A' && ch1 <= 'Z') {
            ch1 = ch1 + 32;
        }
        if(ch2 >= 'A' && ch2 <= 'Z') {
            ch2 = ch2 + 32;
        }

        if(ch1 != ch2) {
            isPalindrome = 0;
            break;
        }
    }

    // Output
    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
