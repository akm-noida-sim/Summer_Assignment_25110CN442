#include<stdio.h>

int main()
{
    int num, count = 0, r;

    printf("Enter the number, to count the number of digits in it: ");

    scanf("%d", &num);

    while(num>0)
    {
        r = num%10;                 //couting digit by removing one's digit

        count++;                    //updating the output

        num=num/10;                 //Removing the end zero
    }

    printf("the number of digit is : %d", count);           //output

    return 0;
}