#include<stdio.h>

int main()
{
    //perfrming linear search
    int arr[10], i, n, search, found = 0;

    printf("Enter the number of elements in the array: ");

    scanf("%d", &n);

    printf("Enter the elements of the array: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");

    scanf("%d", &search);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)        //if the element is found
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("Element %d found at index %d\n", search, i);
    }
    else
    {
        printf("Element %d not found in the array\n", search);
    }
    return 0;
}