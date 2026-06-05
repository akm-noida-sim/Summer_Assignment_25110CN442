#include<stdio.h>
int main()
{   //to check a number is a perfect square or not

    int num, i, sum=0;

    printf("Enter a number: ");

    scanf("%d", &num);

    sum = 0;

    //the sum of the factors of the number is calculated by this loop
    for(i=1; i<=num/2; i++)
    {
        if(num%i==0)
        {
            sum = sum + i;
        }
    }

    //condition for checking if is a perfect square or not

    if(sum == num)
        {
            printf("%d is a perfect square.\n", num);
        }
    else
        {
            printf("%d is not a perfect square.\n", num);
        }
} 
