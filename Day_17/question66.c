#include<stdio.h>
int main()
{
    // program to Union of arrays
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

    int union_arr[n + m];
    int k = 0;

    // Copy arr1
        for (int i = 0; i < n; i++) {
    
        union_arr[k++] = arr1[i];
    }

    // Copy arr2 if not already present
    
    for (int i = 0; i < m; i++) {
        int found = 0;
    
        for (int j = 0; j < k; j++) {
            if (arr2[i] == union_arr[j]) {
                found = 1;
                break;
            }
        }
    
        if (!found) {
    
            union_arr[k++] = arr2[i];
        }
    }

    
    printf("\nUnion of arrays:\n");
    
    for (int i = 0; i < k; i++) {
        printf("%d ", union_arr[i]);
    }

    return 0;
}