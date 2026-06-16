#include<stdio.h>
int main()
{
    //programme to find the maximum frequency element in a given array
    int n, i, j, maxCount = 0, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > maxCount)
        {
            maxCount = count;
        }
    }
    printf("The maximum frequency is: %d", maxCount);
    
    return 0;

}