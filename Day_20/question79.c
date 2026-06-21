#include <stdio.h>
int main()
{
    //programme to print row wise sum
    int mat1[20][20], row1, col1;
   

    printf("Enter the number of of rows and columns for matrix 1: "); // input rows and columns
    scanf("%d%d", &row1, &col1);

    int i, j;

    printf("Enter the matrix:-\n");
    for (i = 0; i < row1; i++) // input the matrix
    {
        for (j = 0; j < col1; j++)
        {
            printf("Enter mat1[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

     for (i = 0; i < row1; i++)
    {
        int sum_row = 0;            //initialising sum =0 
        for (j = 0; j < col1; j++)
        {
            sum_row += mat1[i][j];              //adding the row wise element
            
        }
        printf("The sum of %d row is: %d\n", i+1,sum_row);     //printing it
    }
    return 0;

}