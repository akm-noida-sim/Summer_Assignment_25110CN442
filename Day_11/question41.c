#include<stdio.h>

int sum(int a,int b)
{
    return a+b;         // Function to calculate the sum of two numbers
}

int main()
{

    int a,b;

    printf("Enter two numbers:");       // Prompt the user to enter two numbers

    scanf("%d%d",&a,&b);

    printf("The sum of %d and %d is %d",a,b,sum(a,b));      // Call the sum function and display the result

    return 0;
}