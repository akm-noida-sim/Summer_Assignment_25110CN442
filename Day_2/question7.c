#include<stdio.h>

int main()
{
    int product_num=1, num, r;

    printf("enter the number to find product of digit: ");

    scanf("%d", &num);

    while(num>0)
    {
        r = num % 10;                           //storing the last digit

        product_num = product_num * r;         //finding the product

        num = num / 10;                       //removing last zero
    }

    printf("  product obtained of the digit of the number is = %d", product_num);

    return 0;
}