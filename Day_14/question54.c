#include<stdio.h>
int main()
{
    //calculate the frequency of each element in the array
    int arr[10], i, j, n, freq[10];

    printf("Enter the number of elements in the array: ");

    scanf("%d", &n);

    printf("Enter the elements of the array: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        freq[i] = -1;       //initialize the frequency array with -1
    }
    for(i = 0; i < n; i++)
    {
        int count = 1;
        
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])       //if the element is found
            {
                count++;
                
                freq[j] = 0;           //mark the frequency of the duplicate element as 0
            }
        }
        if(freq[i] != 0)              //if the frequency of the element is not marked as 0
        {
            freq[i] = count;          //store the frequency of the element in the frequency array
        }
    }
    printf("Element\tFrequency\n");
    for(i = 0; i < n; i++)
    {
        if(freq[i] != 0)              //if the frequency of the element is not marked as 0
        {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }
    return 0;

}