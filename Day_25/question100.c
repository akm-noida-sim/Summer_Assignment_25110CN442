#include <stdio.h>
#include <string.h>

int main() 
{
    // Company: Amazon, Deloitte, Capgemini

    char str[200], words[50][100], temp[100];
    int i, n = 0, wLen = 0, len;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    // Extract words from sentence
    for (i = 0; i <= len; i++) 
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            words[n][wLen++] = str[i];
        } 
        
        else 
        {
            if (wLen > 0) 
            {
                words[n][wLen] = '\0';
                n++;
                wLen = 0;
            }
        }
    }

    // Bubble sort by word length
    int j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%s (%d)\n", words[i], (int)strlen(words[i]));
    }

    return 0;
}