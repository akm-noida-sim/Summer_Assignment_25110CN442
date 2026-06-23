#include <stdio.h>
#include <string.h>

int main() 
{
    //Find first non-repeating character

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

    // Find first character with frequency 1
    for (i = 0; i < len; i++) 
    {
        if (freq[(int)str[i]] == 1) 
        {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");

    return 0;
}
