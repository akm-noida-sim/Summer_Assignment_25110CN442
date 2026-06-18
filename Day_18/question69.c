#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of element for the first array: ");

    scanf("%d", &n);
    
    int arr[n];

    printf("Enter the elements of array:\n");

    //taking  array input
    for(int i=0 ; i<n ; i++)
    {
        printf("Emter the %d element ",i+1);
    
        scanf("%d", &arr[i]);
    } 
    int i,j;
    for (i=0 ; i<n-1; i++){
        for(j=0 ; j< n-i ; j++){
            int temp = 0;
            if(arr[j] > arr[j+1]){
                
                temp = arr[j];
                
                arr[j] = arr[j+1];
                
                arr[j+1] = temp;
            }
        }
    }
    

    printf("\narray after sorting s:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}