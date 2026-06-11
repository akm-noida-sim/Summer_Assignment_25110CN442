#include<stdio.h>
int prime_check(int n)        // Function to check if a number is prime
{
    if(n<=1)
    
        return 0;       // 0 and 1 are not prime numbers

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)

            return 0;   // If n is divisible by any number other than 1 and itself, it's not prime
   
    }

    return 1;           // If n is not divisible by any number other than 1 and itself, it's prime
}
int main()
{

    int n;

    printf("Enter a number:");        // Prompt the user to enter a number

    scanf("%d",&n);

    if(prime_check(n))
        printf("%d is a prime number.",n);     // If the number is prime, display this message
    else
        printf("%d is not a prime number.",n); // If the number is not prime, display this message

    return 0;
}