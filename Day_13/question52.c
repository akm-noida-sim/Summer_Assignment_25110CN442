#include<stdio.h>

int main()
{   int n, sum_even=0, sum_odd=0;

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
        if (a[i]%2==0)     //calculating the sum of the even elements in the array
        {
            sum_even ++;
        }
        else                //calculating the sum of the odd elements in the array
        {
            sum_odd ++;
        }
    }
    printf("The sum of the even elements in the array is: %d\n", sum_even);

    printf("The sum of the odd elements in the array is: %d\n", sum_odd);

    return 0;
}