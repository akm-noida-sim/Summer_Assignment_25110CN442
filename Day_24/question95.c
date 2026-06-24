#include <stdio.h>

#include <string.h>

int main() 
{
    // Find longest word in a sentence

    char str[200], word[100], longestWord[100];

    int i, j = 0, maxLen = 0, len;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    for (i = 0; i <= len; i++) 
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            word[j++] = str[i];
        } 
        
        else 
        {
            word[j] = '\0';

            if (j > maxLen) 
            {
                maxLen = j;
                strcpy(longestWord, word);
            }

            j = 0;
        }
    }

    printf("Longest word: %s\n", longestWord);
    printf("Length      : %d\n", maxLen);

    return 0;
}