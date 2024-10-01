#include <stdio.h>

int main() {
    // Declare variables to hold the two numbers and their sum
    float num1, num2, sum;

    // Prompt the user for input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);

    return 0; // Indicate that the program ended successfully
}
