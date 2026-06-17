#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nArithmetic Operations");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("Division = %.2f", result);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}