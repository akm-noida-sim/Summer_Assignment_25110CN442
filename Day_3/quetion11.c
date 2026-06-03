#include<stdio.h>

int gcd(int num1, int num2)
{   
    //finding GCD by recursive function

    int num;

    if(num1<num2)
    {
        num = num2;
        num2 = num1;
        num1=num;
    }
    if(num2==0)
    {
        return num1;
    }
    if(num1>num2)
    {
        return(gcd(num2,num1%num2));
    }
}

int main()
{   //find the GCD of the given number
    int num1, num2, num;

    printf("enter the first number: ");
    scanf("%d", &num1);

    printf("enter the second number: ");
    scanf("%d", &num2);

    printf("The GCD of these two number is %d",gcd(num1,num2));

}