#include<stdio.h>
int main()
{
    //Write a program to Merge arrays

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
        printf("Emter the %d element",i);
        scanf("%d", &arr1[i]);
    }

    //taking second array input
    int arr2[n];

    printf("Enter the elements in the second array:\n");
    
    for(int i=0 ; i<m ; i++)
    {
        printf("Emter the %d element",i);
    
        scanf("%d", &arr2[i]);
    }

    //merging the array
    
    int merge_arr[n+m];
    for (int i = 0; i < n; i++) {
    
        merge_arr[i] = arr1[i];
    }
    
    for (int i = 0; i < m; i++) {
    
        merge_arr[n + i] = arr2[i];
    }

    // Print merged array
    
    printf("\nMerged Array:\n");
    
    for (int i = 0; i < n + m; i++) {
    
        printf("%d ", merge_arr[i]);
    }

    return 0;
}