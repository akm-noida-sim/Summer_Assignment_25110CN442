#include<stdio.h>
int main()
{
    //Write a program to Remove duplicates from an array.
    int n, i, j, k;
    
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
    
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce the size of the array
                j--; // Check the new element at index j
            }
        }
    }
    
    printf("Array after removing duplicates: ");
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}