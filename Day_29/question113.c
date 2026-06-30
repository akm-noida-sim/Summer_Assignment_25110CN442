#include <stdio.h>
#include <math.h>

int main() 
{
    // Menu-Driven Calculator
    int choice;
    float a, b;

    printf("=== Menu-Driven Calculator ===\n\n");

    do {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("%.2f + %.2f = %.2f\n\n", a, b, a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("%.2f - %.2f = %.2f\n\n", a, b, a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("%.2f x %.2f = %.2f\n\n", a, b, a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b == 0) {
                    printf("Error! Division by zero is not allowed.\n\n");
                } else {
                    printf("%.2f / %.2f = %.2f\n\n", a, b, a / b);
                }
                break;

            case 5:
                printf("Enter two integers: ");
                scanf("%f %f", &a, &b);
                if ((int)b == 0) {
                    printf("Error! Modulus by zero is not allowed.\n\n");
                } else {
                    printf("%.0f %% %.0f = %d\n\n", a, b, (int)a % (int)b);
                }
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%f %f", &a, &b);
                printf("%.2f ^ %.2f = %.2f\n\n", a, b, pow(a, b));
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%f", &a);
                if (a < 0) {
                    printf("Error! Square root of a negative number is not defined.\n\n");
                } else {
                    printf("sqrt(%.2f) = %.4f\n\n", a, sqrt(a));
                }
                break;

            case 8:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n\n");
        }

    } while (choice != 8);

    return 0;
}
