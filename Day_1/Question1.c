#include<stdio.h>
int main()
{
    int num, sum=0;                                                         //variable initialisation

    printf("Enter the number till you want to find the sum: ");            //Input

    scanf("%d", &num);                                                    // storing the variable in the declared "num"

    for(int i=1 ; i<=num ; i++)                                             // loop for the result (for loop)
    {
        sum = sum + i;                                                    // statement block
    }

    printf("The number of starting %d natural number is %d: ", num,sum);   //printing the output

    return 0;
}