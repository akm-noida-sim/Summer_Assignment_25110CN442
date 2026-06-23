#include <stdio.h>

int main()
{
    // Count vowels and consonants

    char str[100];
    int i, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        // Check if character is a letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Vowels     = %d\n", vowels);

    printf("Consonants = %d\n", consonants);

    return 0;
}
