#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, i;
    int n2, temp, count, sum, r;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        n2 = i;
        temp = n2;

        count = 0;
        sum = 0;

        // Count digits
        while(temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = n2;

        // Calculate Armstrong sum
        while(temp > 0)
        {
            r = temp % 10;
            sum += (int)pow(r, count);
            temp = temp / 10;
        }

        if(sum == n2)
        {
            printf("%d\n", n2);
        }
    }

    return 0;
}