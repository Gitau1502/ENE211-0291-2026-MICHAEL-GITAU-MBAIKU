#include <stdio.h>

int main() {
    int num1, num2;

    // Take two numbers as input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operations and display the results
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %d\n", num1 / num2);
        printf("Modulus: %d\n", num1 % num2);
    } else {
        printf("Division and Modulus: Cannot divide by zero.\n");
    }

    return 0;
}
