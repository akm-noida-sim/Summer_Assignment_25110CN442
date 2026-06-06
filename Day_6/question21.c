#include<stdio.h>
int main()
{   //code to convert a decimal number to binary
    int a[32],i,n;

    printf("Enter a decimal number: ");

    scanf("%d",&n);

    for(i=0;n>0;i++)        //using the method of repeatedly dividing the number by 2 and storing the remainders in an array
    {
        a[i]=n%2;

        n=n/2;
    }
    printf("The binary equivalent is: ");

    for(i=i-1;i>=0;i--)
    {

        printf("%d",a[i]);

    }
    return 0;
}