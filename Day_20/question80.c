#include <stdio.h>

int main()
{
    // programme to print row wise sum
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

    // 'cols' is the total number of columns, 'rows' is the total number of rows
    for (int j = 0; j < col1; j++)
    {
        int colSum = 0; // Reset sum for each new column
        for (int i = 0; i < row1; i++)
        {
            colSum += mat1[i][j]; // Add elements vertically
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}