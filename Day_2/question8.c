#include<stdio.h>

int main()
{   //code to find the number is palindrome or not

    int rev_num=0, num, num_new, r;

    printf("enter the number to be reversed: ");

    scanf("%d", &num);

    num_new = num;

    while(num_new>0)
    {
        r = num_new % 10;                    //storing the last digit

        rev_num = rev_num * 10 + r;         //making the number with that last digit

        num_new = num_new / 10;            //removing last digit
    }

    printf("The number after reversing is %d \n", rev_num);

    if (rev_num == num)                              //condition for checking the palindrome of number or not
    {
        printf("the entered number is a palindrome:) ");
    }
    else
    {
        printf("the entered number is not a palindrome");
    }

    return 0;
}