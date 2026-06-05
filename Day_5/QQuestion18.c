#include<stdio.h>

int fact(int n)
{
    int fact = 1, i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, sum = 0, n1, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    n1 = n;

    while(n > 0)
    {
        r = n % 10;
        sum = sum + fact(r);   // factorial of each digit
        n = n / 10;
    }

    if(sum == n1)
    {
        printf("%d is a strong number", n1);
    }
    else
    {
        printf("%d is not a strong number", n1);
    }

    return 0;
}