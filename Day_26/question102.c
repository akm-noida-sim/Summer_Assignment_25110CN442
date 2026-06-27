#include <stdio.h>

int main() 
{
    // Voting Eligibility System

    char name[100];
    int age;
    char choice;

    printf("=== Voting Eligibility System ===\n\n");

    do 
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", name);
        printf("Enter Age : ");
        scanf("%d", &age);

        if (age >= 18) 
        {
            printf("Result: %s is ELIGIBLE to vote.\n\n", name);
        } 
        else 
        {
            printf("Result: %s is NOT eligible to vote. (%d more year(s) required)\n\n",
                   name, 18 - age);
        }

        printf("Check another person? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using Voting Eligibility System!\n");

    return 0;
}
