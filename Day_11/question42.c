#include<stdio.h>
int greater(int a,int b)        // Function to find the greater of two numbers
{
    if(a>b)

        return a;

    else

        return b;
}
int main()
{

    int a,b;

    printf("Enter two numbers:");       // Prompt the user to enter two numbers

    scanf("%d%d",&a,&b);

    printf("The greater of %d and %d is %d",a,b,greater(a,b));     // Call the greater function and display the result

    return 0;
}