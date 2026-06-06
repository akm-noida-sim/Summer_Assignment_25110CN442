#include <stdio.h>

int main()
{   //code to convert a binary number to decimal

    int a[32], i,n;

    unsigned long long dec_num = 0;

    printf("Enter the number of binary digits: ");

    scanf("%d", &n);

    for(i = 0; i < n; i++)                              //taking input of binary number in an array
    {
        printf("Enter binary digit %d : ", i + 1);

        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)            //converting binary to decimal using the formula: dec_num = dec_num * 2 + current_bit
    {
        dec_num = dec_num * 2 + a[i];
    }

    printf("The decimal equivalent is: %llu", dec_num);

    return 0;
}