#include <stdio.h>
#include <string.h>

int main() 
{
    //Find maximum occurring character

    char str[100];
    int freq[256] = {0};
    int i, max = 0, maxChar = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) 
    {
        freq[(int)str[i]]++;
    }

    // Find character with maximum frequency
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > max) 
        {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character: '%c' (%d times)\n", maxChar, max);

    return 0;
}
