#include <stdio.h>

int main()
{
    int i, j, n = 5;

    for (i = 1; i <= n; i++) // outer loop for number of rows
    {
        for (j = 1; j <= n; j++) // inner loop for number of columns
        {
            if (i == 1 || i == n || j == 1 || j == n) // printing the star for the border

            {
                printf("*");        // printing space for the inner part of the square
            } 

            else

            {
                printf(" ");        // printing space for the inner part of the square
            } 
        }
        printf("\n");
    }

    return 0;
}