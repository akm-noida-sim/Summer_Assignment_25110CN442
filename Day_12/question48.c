#include<stdio.h>

int perfect_num()
{ // function to check if a number is perfect or not

    int num, sum = 0;

    printf("Enter a number: ");

    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    { // loop to calculate the sum of the factors of the number
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    { // if the sum of the factors is equal to the original number, then it is a perfect number
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    if (perfect_num())
    {
        printf("The number is a perfect number."); // if the function returns 1, then it is a perfect number
    }
    else
    {
        printf("The number is not a perfect number."); // if the function returns 0, then it is not a perfect number
    }
    return 0;
}