#include <stdio.h>

int palindrome(int num)
{ // function to check if a number is palindrome or not

    int rev = 0, rem, temp;

    temp = num;

    while (temp != 0) // loop to reverse the number
    {

        rem = temp % 10;

        rev = rev * 10 + rem;

        temp = temp / 10;
    }
    if (rev == num)
    { // if the reversed number is equal to the original number, then it is a palindrome
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;

    printf("Enter a number: ");

    scanf("%d", &num);

    if (palindrome(num))
    {
        printf("%d is a palindrome number.", num); // if the function returns 1, then it is a palindrome
    }
    else
    {
        printf("%d is not a palindrome number.", num); // if the function returns 0, then it is not a palindrome
    }
    return 0;
}