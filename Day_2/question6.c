#include<stdio.h>

int main()
{
    int rev_num=0, num, r;

    printf("enter the number to be reversed: ");

    scanf("%d", &num);

    while(num>0)
    {
        r = num % 10;                       //storing the last digit

        rev_num = rev_num * 10 + r;         //making the number with that last digit

        num = num / 10;                     //removing last zero
    }

    printf("The number obtained by reversing the number is = %d", rev_num);

    return 0;
}