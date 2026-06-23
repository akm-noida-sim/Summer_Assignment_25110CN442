#include <stdio.h>

int main() 
{
    //Count words in a sentence

    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");

    scanf("%[^\n]", str);

    // Count words by checking spaces
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') 
        {
            words++;
        }
    }

    // Count the last (or only) word
    if (str[0] != '\0') 
    {
        words++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}
