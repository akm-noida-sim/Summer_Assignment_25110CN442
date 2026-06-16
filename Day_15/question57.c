#include <stdio.h>

int main()
{
    // write a program to reverse an array
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
    printf("\nThe reversed array is: ");

    for (i = 0; i < n / 2; i++)
    { // swap arr[i] and arr[n-i-1]
        int temp = arr[i];

        arr[i] = arr[n - i - 1];

        arr[n - i - 1] = temp;
    }
    printf("\nThe reversed array is: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}