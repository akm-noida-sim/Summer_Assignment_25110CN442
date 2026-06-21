#include <stdio.h>
int main()
{
    // programme to subtract two matrices

    int mat1[20][20], mat2[20][20], row1, col1, row2, col2;
    int mat_multiply[20][20];

    printf("Enter the number of of rows and columns for matrix 1: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the number of of rows and columns for matrix 2: ");
    scanf("%d%d", &row2, &col2);

    // taking the input of both the matix
    int i, j;

    if (row1 == col1)
    {
        printf("Enter the first matrix:-\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("Enter mat1[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("Enter the second matrix:-\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("Enter mat2[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &mat2[i][j]);
            }
        }

        // multiply
        printf("The resultant matrix is ");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                mat_multiply[i][j] = 0;
                for (int k = 0; k < col1; k++)
                {
                    mat_multiply[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("The resultant matrix is:\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d, ", mat_multiply);
            }
            printf("\n");
        }
    }
    
    else
    {
        printf("multiplication Not possible");
    }
    return 0;
}