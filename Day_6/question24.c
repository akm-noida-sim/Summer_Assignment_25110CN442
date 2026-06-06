#include<stdio.h>
int main()
{
    //programme to find x^n of a number withut pow() function
    int x, n, result = 1;

    printf("Enter the base number (x): ");

    scanf("%d", &x);

    printf("Enter the exponent (n): ");

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        result *= x; // Multiply result by x in each iteration
    }

    printf("%d raised to the power of %d is: %d", x, n, result);
    
    return 0;

}