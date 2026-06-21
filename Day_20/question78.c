#include <stdio.h>

int main()
{
    // programme to check whether the matirx is symmetric or not

    int mat1[20][20], row1, col1;
    int isSymmetric = 1; // Flag assuming matrix is symmetric

    printf("Enter the number of of rows and columns for matrix 1: "); // input rows and columns
    scanf("%d%d", &row1, &col1);

    int i, j;

    if (row1 == col1)
    {
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
            for (j = 0; j < col1; j++)
            {
                if (mat1[i][j] != mat1[j][i])
                {
                    isSymmetric = 0;
                    break;
                }
            }

            if (!isSymmetric)
            {
                break; // Exit outer loop early
            }
        }

        // 5. Output result
        if (isSymmetric)

        {
            printf("The matrix is a Symmetric Matrix.\n");
        }
        else

        {
            printf("The matrix is NOT a Symmetric Matrix.\n");
        }
    }
    else
    {
        printf("Not possible");
    }
    return 0;
}