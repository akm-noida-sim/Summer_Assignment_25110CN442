
#include <stdio.h>

int main()
{
    // Merge two sorted arrays

    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, j, k = 0;

    printf("Enter the number of element in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array (sorted):\n");
    for (i = 0; i < n1; i++)
    {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of element in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array (sorted):\n");
    for (i = 0; i < n2; i++)
    {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    // Merge both arrays in sorted order
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }

        else
        {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements
    while (i < n1)
        merged[k++] = arr1[i++];
    while (j < n2)
        merged[k++] = arr2[j++];

    printf("Merged sorted array: ");

    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
