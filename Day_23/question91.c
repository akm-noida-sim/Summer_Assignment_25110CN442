#include <stdio.h>
#include <string.h>

int main()
{
    // Check anagram strings

    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar(); //  just eats the '\n', doesn't wait

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    // Strings with different lengths can't be anagrams
    if (strlen(str1) != strlen(str2))
    {
        printf("Strings are NOT Anagram\n");
        return 0;
    }

    // Increment for str1, decrement for str2
    for (i = 0; str1[i] != '\0'; i++)
    {
        freq[(int)str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        freq[(int)str2[i]]--;
    }

    // If all values are 0 => anagram
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Strings are Anagram\n");

    else
        printf("Strings are NOT Anagram\n");

    return 0;
}