#include <stdio.h>

int main()
{
    // Convert lowercase to uppercase

    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Convert each lowercase letter to uppercase
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
