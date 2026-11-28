#include <stdio.h>

// Function Prototypes
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main(void) {
    int choice;
    float temperature, result;

    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");

    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Celsius value: ");
            scanf("%f", &temperature);

            result = celsiusToFahrenheit(temperature);

            printf("%.1f C = %.1f F\n", temperature, result);
            break;

        case 2:
            printf("Enter Fahrenheit value: ");
            scanf("%f", &temperature);

            result = fahrenheitToCelsius(temperature);

            printf("%.1f F = %.1f C\n", temperature, result);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}
