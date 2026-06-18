#include<stdio.h>

int main()
{   
    //  Write a program to Intersection of arrays.
    int n,m;
    printf("Enter the number of element for the first array: ");

    scanf("%d", &n);
    
    printf("Enter the number of element for the second array: ");

    scanf("%d", &m);

    int arr1[n];

    printf("Enter the elements in the first array:\n");

    //taking first array input
    for(int i=0 ; i<n ; i++)
    {
        printf("Emter the %d element ",i+1);
    
        scanf("%d", &arr1[i]);
    }

    //taking second array input
    int arr2[n];
    
    printf("Enter the elements in the second array:\n");
    
    for(int i=0 ; i<m ; i++)
    {
        printf("Emter the %d element ",i+1);
        scanf("%d", &arr2[i]);
    }

    printf("\nIntersection of arrays:\n");
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
         {
            if (arr1[i] == arr2[j]) 
                {
                    printf("%d ", arr1[i]);
                    break; // avoid printing duplicates
            }
         }

    }

    return 0;
}