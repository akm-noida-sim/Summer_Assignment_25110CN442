#include<stdio.h>
int main()
{   
    //C programme to generate a fibbonacci series

    int n=5, fpre_term=0, spre_term=1, next_term; //defining terms for Fibonacci series

    printf("Fibonacci Series: ");

    for(int i=1; i<=n; i++)         //loop to generate Fibonacci series up to n terms
    {
        printf("%d ", fpre_term);

        next_term = fpre_term + spre_term;

        fpre_term = spre_term;

        spre_term = next_term;
    }
    return 0;

}