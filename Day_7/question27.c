#include<stdio.h>
int sod(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sod(n));
    return 0;

}
int sod(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10)+sod(n/10);
    return 0;
    
}