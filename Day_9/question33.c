#include<stdio.h>

int main()
{
    //code to print reverse half pyramid
    int  i, j;


    for(i=1; i<=5; i++)     //outer loop for number of rows
    {
        for(j=5; j>=i; j--)     // inner loop for number of columns
        {
            printf("*");        //printing the star
        }
        printf("\n");       //new line after each row
    }
    return 0;
}