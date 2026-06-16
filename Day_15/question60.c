#include <stdio.h>

int main()
{
    // Write a program to Move zeroes to the end of the array
    int n, i, j = 0;

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

    // Move zeroes to the end of the array
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j++] = arr[i];
        }
    }
    while (j < n)
    {
        arr[j++] = 0;
    }
    printf("The array after moving zeroes to the end is: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}