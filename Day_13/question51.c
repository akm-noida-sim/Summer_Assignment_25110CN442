#include<stdio.h>

int main()
{   int n, max =0;

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
        if (a[i]>max)      //finding the maximum element in the array
        {
            max = a[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    return 0;

}