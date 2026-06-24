#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    //Compress a string (Run-length encoding)
    char str[100], result[200];

    int i, count, j = 0, len;
    char numStr[10];


    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    i = 0;
    while (i < len) 
    {
        count = 1;

        // Count consecutive same characters
        while (i + count < len && str[i + count] == str[i]) 
        {
            count++;
        }

        result[j++] = str[i];

        // Add count only if greater than 1
        if (count > 1) 
        {
            sprintf(numStr, "%d", count);
            int k;
            for (k = 0; numStr[k] != '\0'; k++) 
            {
                result[j++] = numStr[k];
            }
        }

        i += count;
    }
    
    result[j] = '\0';

    printf("Compressed string: %s\n", result);

    return 0;
}