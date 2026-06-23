#include <stdio.h>
#include <string.h>

int main() 
{
    //Reverse a string
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    printf("Reversed string: ");

    for (i = len - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }
    
    printf("\n");

    return 0;
}
