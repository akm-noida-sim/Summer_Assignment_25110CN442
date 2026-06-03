#include<stdio.h>

int main()
{
    int num, i, count =0;

    printf("enter the number to check whether prime or not: ");

    scanf("%d",&num);

    for(i = 2; i <= num/2; i++)
    {
        if(num % i ==0 )
        {
            count++;
            break;
        }
    }

    if(count > 0 )
    {
        printf("The Entered number is not prime");
    }

    else
    {
        printf("The netered number is a prime number.");
    }

    return 0;
}