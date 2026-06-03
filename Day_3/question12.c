#include<stdio.h>

int main()
{
    int num1, num2, max;

    printf("Enter the two numbers; ");
    scanf("%d%d",&num1,&num2);

    //find the larger number

    if(num1>num2)
    {
        max=num1;
    }
    else
        max=num2;

        //keep checking until LCM is found
    while(1)
    {
        if(max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM = %d", max);
            break;
        }

        max++;

    }

    return 0;
}