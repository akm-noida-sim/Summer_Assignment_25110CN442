#include<stdio.h>
int main()
{
    //programme to find the second largest element in the array
    
    int arr[10], i, n, largest, second_largest;

    printf("Enter the number of elements in the array: ");

    scanf("%d", &n);

    printf("Enter the elements of the array: ");

    for(i = 0; i < n; i++)

    {
        scanf("%d", &arr[i]);
    }
    largest = second_largest = arr[0];     //initialize the largest and second largest element with the first element of the array
    
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)              //if the current element is greater than the largest element
        {
            second_largest = largest;      

            largest = arr[i];             //update the largest element with the current element
        }
        else if(arr[i] > second_largest && arr[i] != largest)     //if the current element is greater than the second largest element and not equal to the largest element
        {
            second_largest = arr[i];      //update the second largest element with the current element
        }
    }
    printf("The second largest element in the array is: %d\n", second_largest);

    return 0;
}