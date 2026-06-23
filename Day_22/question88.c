#include <stdio.h>

int main() 
{
    //Remove spaces from string

    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Copy all non-space characters to result
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ') 
        {
            result[j++] = str[i];
        }
    }
    
    result[j] = '\0';

    printf("String after removing spaces: %s\n", result);

    return 0;
}
