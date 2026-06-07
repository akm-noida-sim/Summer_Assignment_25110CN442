#include<stdio.h>
int fact(int n)
{   //base case
    if(n==1)
        return 1;

    //recursive case
    else

        return n*fact(n-1);
}

void main()
{
    int n;

    printf("Enter a number: ");

    scanf("%d",&n);
    
    printf("Factorial of %d is %d",n,fact(n));
}