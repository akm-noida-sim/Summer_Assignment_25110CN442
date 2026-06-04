#include<stdio.h>
#include<math.h>
int main()
{
    //check if the given number is a armstrong number ot not

    int n, sum=0, r, count=0,n1;

    printf("Enter the number to find the armstrong");

    scanf("%d", &n);

    n1=n;           //storing the number

    while(n>0)
    {

        n=n/10;         //couting the number of digit in the number

        count++;
    }

    n=n1;

    while(n>0)          //loop to sum the digit power to the number of digit
    {
        r=n%10;

        sum=sum+pow(r,count);       //using maths library(pow)

        n=n/10;
    }

    if(sum==n1)
    {
        printf("The number is an armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
}