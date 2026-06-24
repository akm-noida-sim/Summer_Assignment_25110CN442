#include <stdio.h>
#include <string.h>

int main() 
{
    //Remove duplicate characters from string
    char str[100], result[100];
    int freq[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        // Add character only if it hasn't appeared before
        if (freq[(int)str[i]] == 0) 
        {
            result[j++] = str[i];
            freq[(int)str[i]] = 1;
        }
    }
    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}
