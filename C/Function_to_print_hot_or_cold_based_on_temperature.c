#include<stdio.h>

// Function to determine if temperature is Hot or Cold
void checkTemperature(int temp) {
    if(temp >= 30) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    }
}

int main() {
    int temperature;

    // Taking temperature input
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);

    // Calling function to check Hot/Cold
    checkTemperature(temperature);

    return 0;
}
