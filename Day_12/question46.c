#include<stdio.h>
#include<math.h>

int armstrong(int num)
{ // function to check if a number is armstrong or not

    int rem, temp, sum = 0,count =0;

    temp = num;

    while(num>0)
    {
        num = num/10;

        count++;
    }

    num = temp;
    while(num != 0) // loop to calculate the sum of the cubes of the digits
    {

        rem = num % 10;

        sum = sum + pow(rem,count);

        num = num / 10;
    }
}
   
int main()
{

    int num;

    printf("Enter a number: ");

    scanf("%d", &num);

    if (armstrong(num))
    {
        printf("%d is an armstrong number.", num); // if the function returns 1, then it is an armstrong number
    }
    else
    {
        printf("%d is not an armstrong number.", num); // if the function returns 0, then it is not an armstrong number
    }
    return 0;
}