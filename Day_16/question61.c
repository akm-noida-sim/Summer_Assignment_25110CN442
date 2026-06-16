#include<stdio.h>
 int main()
 {
    //programme to find the missing number in the array
    int n, i, sum = 0, total;

    printf("Enter the number of elements in the array: ");

    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];               // calculate the sum of the elements in the array
    }

    total = (n * (n + 1)) / 2;      // formula to calculate the sum of first n natural numbers

    printf("The missing number is: %d", total - sum);    // calculate the missing number by subtracting the sum of the array from the total sum of first n natural numbers

    return 0;
 }