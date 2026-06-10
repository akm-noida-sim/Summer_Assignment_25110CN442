#include <stdio.h>

int main()
{
    int i, j, rows = 5;
    char ch;

    for(i = 1; i <= rows; i++)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print increasing letters
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }

        // Print decreasing letters
        for(j = i - 1; j >= 1; j--)
        {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}