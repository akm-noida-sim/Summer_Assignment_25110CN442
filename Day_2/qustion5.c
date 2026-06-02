#include<stdio.h>

int main()
{

    int r, num, sum = 0;

    printf("enter the number to find the digit sum: ");

    scanf("%d", &num);                                  //input and storing the value

    while(num > 0)
    {
        r = num % 10;               //storing the last digit

        sum= sum + r;               //adding the last digit

        num = num/10;               //removing the last zero
    }

    printf("The sum of digit for this number  = %d", sum);              //printing the sum

    return 0;

}