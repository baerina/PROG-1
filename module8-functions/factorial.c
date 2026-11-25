#include <stdio.h>

// Function Prototype
int factorial(int n);

int main() {
    int chosenNumber;
    int factorialResult;

    printf("Enter a number: ");
    scanf("%d", &chosenNumber);

    if (chosenNumber < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorialResult = factorial(chosenNumber);

        printf("%d! = %d\n", chosenNumber, factorialResult);
    }

    return 0;
}

// Function Definition
int factorial(int n) {
    int product = 1;
    int multiplier;

    for (multiplier = 1; multiplier <= n; multiplier++) {
        product = product * multiplier;
    }

    return product;
}
