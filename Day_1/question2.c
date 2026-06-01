#include<stdio.h>
int main()
{
    int num, i;

    printf("Enter the number of which table you want to print: ");

    scanf("%d", &num);                                                  //input and storing in the variable

    printf("The required table is:\n");

    for(i=1 ; i<=10 ; i++)                                              // loop conditionss
    {

        printf("%d X %d = %d \n", num, i, num*i);                          // loop block statment
    
    }
    return 0;
}