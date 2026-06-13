#include<stdio.h>

int main()
{   int n;

    printf("Enter the number of elements to enter in the array");       //taking the size of the array from the user

    scanf("%d",&n);

    int a[n],i;

    for (i=0;i<n;i++)               //taking the elements of the array from the user
    {
        printf("Enter the element %d: ",i+1);

        scanf("%d",&a[i]);
    }

    printf("The elements in the array are: ");       //printing the elements of the array

    for (i=0;i<n;i++)    
    {
        printf("%d, ",a[i]);
    }

}