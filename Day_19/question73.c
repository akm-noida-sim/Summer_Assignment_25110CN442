#include <stdio.h>
int main()
{
    // programme to add two matrices

    int mat1[20][20], mat2[20][20], row1, col1, row2, col2;
    int mat_sum[20][20];

    printf("Enter the number of of rows and columns for matrix 1: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the number of of rows and columns for matrix 2: ");
    scanf("%d%d", &row2, &col2);


    //taking the input of both the matix
    int i, j;
    if (row1 == row2 && col1 == col2)
    {
        printf("Enter the first matrix:-\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("Enter mat1[%d][%d]: ", i+1, j+1);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("Enter the second matrix:-\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("Enter mat2[%d][%d]: ", i+1, j+1);
                scanf("%d", &mat2[i][j]);
            }
        }
        //adding both the matix
        printf("the resultant matrix is\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                mat_sum[i][j] = mat1[i][j] + mat2[i][j];
                printf("%d, ", mat_sum[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("The addition is not possible");
    }

    return 0;
}