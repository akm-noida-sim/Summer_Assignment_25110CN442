#include<stdio.h>

int main()
{   //prime number in a given range
    int num1, num2 ,i ,j ;

    printf("enter the starting range number; ");
    scanf("%d", &num1);

    printf("enter the end range number; ");
    scanf("%d", &num2);

    for(i = num1; i<=num2; i++ )    //outer loop from num1 to num2
    {
        int count=0;                //initialising the count

        if(i <= 1)
            continue;               //As 1 is neigther prime nor composite so skipping it 

        for(j=2; j<=i/2;j++)        //inner loop for any num1 checking is it prime or not 
        {       
            if(i % j == 0)
            {
                count = 1;
                break;
            }
        
        }
        if(count==0)
        {
            printf("%d\n",i);         //printing prime number
        }
    }

    return 0;

}