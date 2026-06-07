#include<stdio.h>
int fib(int n)
{   //base case

    if(n==0)

        return 0;

    else if(n==1)
        return 1;

    //recursive case
    else

        return fib(n-1)+fib(n-2);
}
int main()
{
    int n;

    printf("Enter a number of fibbonacci series to print: ");

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}