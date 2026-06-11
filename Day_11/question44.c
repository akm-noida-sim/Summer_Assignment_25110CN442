#include<stdio.h>

int factorial(int n)       // Function to calculate the factorial of a number
{
    if(n==0 || n==1)

        return 1;       // The factorial of 0 and 1 is 1

    else

        return n*factorial(n-1);     // Recursive call to calculate the factorial
}
int main()
{

    int n;

    printf("Enter a number:");        // Prompt the user to enter a number

    scanf("%d",&n);

    if(n<0)
        printf("Factorial is not defined for negative numbers.");    // Factorial is not defined for negative numbers

    else
    
        printf("The factorial of %d is %d",n,factorial(n));     // Call the factorial function and display the result

    return 0;
}