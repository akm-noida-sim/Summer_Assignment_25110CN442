#include<stdio.h>

int main()
{
    //code to print alphabet pyramid
    int i, j;
    char alphabet = 'A';



    for(i=1; i<=5; i++)     //outer loop for number of rows
    {
        for(j=1; j<=i; j++)     // inner loop for number of columns
        {
            printf("%c", j+64 );        //printing the alphabet
        }
        printf("\n");       //new line after each row
    }
    return 0;
}