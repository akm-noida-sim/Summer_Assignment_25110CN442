// Q103 - ATM Simulation
// Company: TCS, Accenture, Cognizant

#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, choice, attempts = 0;
    float balance = 10000.0, amount;

    printf("=== Welcome to ATM ===\n\n");

    // PIN verification (max 3 attempts)
    do 
    {
        printf("Enter PIN: ");
        scanf("%d", &enteredPin);
        attempts++;

        if (enteredPin != pin) 
        {
            printf("Wrong PIN! Attempts left: %d\n\n", 3 - attempts);
        }

        if (attempts == 3 && enteredPin != pin) 
        {
            printf("Card Blocked! Too many wrong attempts.\n");
            return 0;
        }

    } while (enteredPin != pin);

    printf("PIN Verified! Welcome.\n\n");

    do 
    {
        printf("--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) 
        {
            case 1:
                printf("Current Balance: Rs. %.2f\n\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: Rs. ");
                scanf("%f", &amount);
                if (amount > 0) 
                {
                    balance += amount;
                    printf("Rs. %.2f deposited successfully!\n", amount);
                    printf("New Balance: Rs. %.2f\n\n", balance);
                } 
                else 
                {
                    printf("Invalid amount! Please try again.\n\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: Rs. ");
                scanf("%f", &amount);
                if (amount <= 0) 
                {
                    printf("Invalid amount!\n\n");
                } 
                else if (amount > balance) 
                {
                    printf("Insufficient balance!\n\n");
                } 
                
                else 
                {
                    balance -= amount;
                    printf("Rs. %.2f withdrawn successfully!\n", amount);
                    printf("Remaining Balance: Rs. %.2f\n\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n\n");
        }

    } while (choice != 4);

    return 0;
}
