#include<stdio.h>
int main()
{
    //programme to find duplicate element in the array
    int arr[10], i, j, n;

    printf("Enter the number of elements in the array: ");

    scanf("%d", &n);

    printf("Enter the elements of the array: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are: ");
    
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {

            if(arr[i] == arr[j])       //if the element is found

            {
                printf("%d ", arr[i]); //print the duplicate element

                break;                  //break the loop to avoid printing the same element again
            }
        }
    }

    printf("\n");

    return 0;
}