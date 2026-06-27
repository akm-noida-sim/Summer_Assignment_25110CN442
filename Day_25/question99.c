#include <stdio.h>
#include <string.h>

int main()
{
    // Sort names alphabetically

    int n, i, j;
    char names[50][100], temp[100];

    printf("Enter number of names: ");
    scanf("%d", &n);
    

    for (i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        getchar();

        scanf("%[^\n]", names[i]);
    }

    // Bubble sort alphabetically using strcmp
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}