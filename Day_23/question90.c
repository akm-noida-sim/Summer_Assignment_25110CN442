#include <stdio.h>
#include <string.h>

int main() 
{
    //Find first repeating character
    char str[100];
    int freq[256] = {0};
    int i, len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    // Count frequency of each character
    for (i = 0; i < len; i++) 
    {
        freq[(int)str[i]]++;
    }

    // Find first character with frequency more than 1
    for (i = 0; i < len; i++) 
    {
        if (freq[(int)str[i]] > 1) 
        {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found\n");

    return 0;
}
