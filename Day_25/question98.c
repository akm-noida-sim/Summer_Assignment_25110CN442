#include <stdio.h>
#include <string.h>

int main() 
{
    // Find common characters in two strings

    char str1[100], str2[100];

    int freq1[256] = {0}, freq2[256] = {0};
    int i, found = 0;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    printf("--------------------------\n");
    getchar();
    
    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    // Count frequency in both strings
    for (i = 0; str1[i] != '\0'; i++) freq1[(int)str1[i]]++;
    for (i = 0; str2[i] != '\0'; i++) freq2[(int)str2[i]]++;

    printf("Common characters: ");
    for (i = 0; i < 256; i++) 
    {
        if (freq1[i] > 0 && freq2[i] > 0) 
        {
            printf("%c ", (char)i);
            found = 1;
        }
    }

    if (!found) 

    {
        printf("None");
    }
    
    printf("\n");

    return 0;
}