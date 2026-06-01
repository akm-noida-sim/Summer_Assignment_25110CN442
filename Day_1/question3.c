#include<stdio.h>
int main()
{
    int num, i, fact =1; 

    printf("enter the number to find the factorial : " );

    scanf("%d", &num);                                   // input and variable storage

    for(i = 1 ; i<=num ; i++)                            // loop condition
    {
        fact *= i;                                      // the loop statemnt block
    
    }

    printf("the factorial of %d = %d ", num, fact );    //printing the output

    return 0;
}