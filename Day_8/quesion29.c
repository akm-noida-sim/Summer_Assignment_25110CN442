#include<stdio.h>

int main()
{
    //code to print pyramid
    int n, i, j;

    printf("enter the number of rows: ");

    scanf("%d", &n);

    for(i=1; i<=n; i++)     //outer loop for number of rows
    {
        for(j=1; j<=i; j++)     // inner loop for number of columns
        {
            printf("*");        //printing the star
        }
        printf("\n");       //new line after each row
    }
    return 0;
}