#include <stdio.h>
int main()
{
    // programme to transpose a matrices

    int mat1[20][20], row1, col1;

    printf("Enter the number of of rows and columns for matrix 1: ");
    scanf("%d%d", &row1, &col1);

    int i, j;

    printf("Enter the matrix:-\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("Enter mat1[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }

    int mat2[20][20];
    printf("the transpose of matrix is\n");
    for (i = 0; i < row1; i++)
    {
        int temp = 0;
        for (j = 0; j < col1; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d, ", mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}