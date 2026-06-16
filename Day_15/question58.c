#include <stdio.h>

int main()
{
    // code to rotate an array on right by 1 position
    int n, i;

    printf("Enter the size of the array: ");

    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array: ");
    
    for (i = 0; i < n; i++)
    {
    
        printf("Element %d: ", i + 1);
    
        scanf("%d", &arr[i]);
    }
    
    printf("The original array is: ");
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // rotate the array to the right by 1 position
    
    int last = arr[n - 1];
    
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = last;
    
    printf("\nThe rotated array is: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}