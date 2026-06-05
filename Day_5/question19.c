#include<stdio.h>
int main()
{   //to find factors of a number

    int num, i ;

    printf("Enter a number: ");

    scanf("%d", &num);



    //loop to print the factors
    for(i=1; i<=num/2; i++)
    {
        if(num%i==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}