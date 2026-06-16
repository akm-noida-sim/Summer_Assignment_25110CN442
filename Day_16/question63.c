#include<stdio.h>
int main()
{
    //wWrite a program to Find pair with given sum.
    int n, i, j, sum;
    printf("Enter the number of elements in the array: ");
    
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the sum: ");
    
    scanf("%d", &sum);
    
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found at indices %d and %d with values %d and %d\n", i, j, arr[i], arr[j]);
            }
        }
    }
    return 0;
}