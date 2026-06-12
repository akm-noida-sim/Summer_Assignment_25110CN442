#include <stdio.h>

void print_fibb_up_to_value(int max_value) 
{

    int a = 0, b = 1, next = 0;

    while (a <= max_value) {

        printf("%d ", a);

        next = a + b;

        a = b;

        b = next;
    }
    printf("\n");
}

int main() {

    int num;

    printf("Enter the maximum value limit: ");
    scanf("%d", &num);

    printf("The Fibonacci series up to %d is: ", num);

    print_fibb_up_to_value(num);
    return 0;
}