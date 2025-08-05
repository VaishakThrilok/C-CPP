#include<stdio.h>

int main() {
    char day;

    printf("Enter day initial (m/t/w/T/f/s/S): ");
    scanf(" %c", &day);  // Notice the space before %c to handle newline buffer

    switch(day) {
        case 'm': printf("Monday\n"); break;
        case 't': printf("Tuesday\n"); break;
        case 'w': printf("Wednesday\n"); break;
        case 'T': printf("Thursday\n"); break;
        case 'f': printf("Friday\n"); break;
        case 's': printf("Saturday\n"); break;
        case 'S': printf("Sunday\n"); break;
        default: printf("Invalid day character!\n");
    }

    return 0;
}
