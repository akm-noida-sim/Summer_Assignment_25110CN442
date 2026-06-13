#include<stdio.h>

int main()
{   int n, sum=0, avg=0;

    printf("Enter the number of elements to enter in the array");       //taking the size of the array from the user

    scanf("%d",&n);

    int a[n],i;

    for (i=0;i<n;i++)               //taking the elements of the array from the user
    {
        printf("Enter the element %d: ",i+1);

        scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++)
    {   
        sum += a[i];    //calculating the sum of the elements in the array
    }
    avg = sum/n;      //calculating the average of the elements in the array

    printf("The sum of the elements in the array is: %d\n", sum);
    printf("The average of the elements in the array is: %d\n", avg);

    return 0;
}