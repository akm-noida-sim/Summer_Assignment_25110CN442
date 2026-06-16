#include <stdio.h>

int main()
{
    // rotating the array to the left by 1 position
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

    // rotate the array to the left by 1 position

    int first = arr[0];

    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    printf("\nThe rotated array is: ");

    for (i = 0; i < n; i++)

    {
        printf("%d ", arr[i]);
    }
    return 0;
}