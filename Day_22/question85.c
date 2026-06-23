#include <stdio.h>
#include <string.h>

int main() 
{
    //Check palindrome string

    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    // Compare characters from both ends
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - 1 - i]) 
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("%s is a Palindrome\n", str);
    }
        
    else
        printf("%s is not a Palindrome\n", str);

    return 0;
}
