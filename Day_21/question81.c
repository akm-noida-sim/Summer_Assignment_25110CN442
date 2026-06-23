


#include <stdio.h>

int main()
 { //Find string length without strlen()
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Count characters until null character obtained
    while (str[i] != '\0') 
    {
        i++;
    }

    printf("Length of the string = %d\n", i);

    return 0;
}
