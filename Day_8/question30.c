#include<stdio.h>

int main()
{
    //code to print numbere pyramid
    int i, j;

    for(i=1; i<=5; i++)     //outer loop for number of rows
    {
        for(j=1; j<=i; j++)     // inner loop for number of columns
        {
            printf("%d", j);        //printing the number
        }
        printf("\n");       //new line after each row
    }
    return 0;
}