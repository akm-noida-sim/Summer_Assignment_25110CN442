#include <stdio.h>

int main() {
    long long num; 
    long long max_prime = -1; 

    // Get input from the user
    printf("Enter a integer to find greates prime number: ");
    
    if (scanf("%lld", &num) != 1 || num <= 1)
    {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    // Divide out all the factors of 2
    while (num % 2 == 0) 
    {
        max_prime = 2;
        num /= 2;
    }

    //Check odd numbers starting from 3 up to sqrt(num)

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            max_prime = i;
            num /= i;
        }
    }

    //If num is still greater than 2, the remaining portion is prime
    if (num > 2) {
        max_prime = num;
    }

    // Print the final result
    printf("The largest prime factor is: %lld\n", max_prime);

    return 0;
}
