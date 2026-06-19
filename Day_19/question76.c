#include<stdio.h>

int main()
{
    // programme to transpose a matrices
    int diago_sum =0;
    int mat1[20][20], row1, col1;

    printf("Enter the number of of rows and columns for matrix 1: ");   //input rows and columns
    scanf("%d%d", &row1, &col1);

    int i, j;

    printf("Enter the matrix:-\n");
    for (i = 0; i < row1; i++)      //input the matrix
    {
        for (j = 0; j < col1; j++)
        {
            printf("Enter mat1[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i < row1; i++)      // adding the diagonal elements
    {
        for (j = 0; j < col1; j++)
        {
            if(i==j)
            {
                diago_sum += mat1[i][j];
            }
        }
    }

    printf("The sum of diagonal of the matrix is %d: ", diago_sum);
    return 0;
}