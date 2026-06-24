#include <stdio.h>
#include <string.h>

int main() 
{
    //Check string rotation

    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar(); //  just eats the '\n', doesn't wait

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    // Rotation is only possible if lengths are equal
    if (strlen(str1) != strlen(str2)) 
    {
        printf("%s is NOT a rotation of %s\n", str2, str1);
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);

    strcat(temp, str1);

    // If str2 is a substring of temp, it's a rotation
    if (strstr(temp, str2) != NULL) 
    {
        printf("%s IS a rotation of %s\n", str2, str1);
    } 

    else
    {
        printf("%s is NOT a rotation of %s\n", str2, str1);
    }

    return 0;
}
