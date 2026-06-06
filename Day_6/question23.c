#include<stdio.h>
int main()
{
    //programe to find set bits in a number
    int n, count = 0;

    printf("Enter a number: ");

    scanf("%d", &n);

    while(n)
    {
        count += n & 1;    // Increment count if the last bit is 1
        n >>= 1;           // Right shift the bits of n by 1
    }
    
    printf("Number of set bits: %d", count);

    return 0;

}