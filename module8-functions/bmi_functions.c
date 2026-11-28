#include <stdio.h>

// Function Prototypes
float calculateBMI(float weight, float height);
void categorizeBMI(float bmi);

int main(void) {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = calculateBMI(weight, height);

    printf("BMI: %.2f\n", bmi);

    categorizeBMI(bmi);

    return 0;
}

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    float result;

    result = weight / (height * height);

    return result;
}

// Function to determine BMI category
void categorizeBMI(float bmi) {
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } 
    else if (bmi < 25.0) {
        printf("Category: Normal\n");
    } 
    else if (bmi < 30.0) {
        printf("Category: Overweight\n");
    } 
    else {
        printf("Category: Obese\n");
    }
}

