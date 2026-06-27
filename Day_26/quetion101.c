#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // Number Guessing Game
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = rand() % 100 + 1;  // Random number between 1 and 100

    printf("=== Number Guessing Game ===\n");
    printf("Guess the number between 1 and 100\n\n");

    do 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret) 
        {
            printf("Too Low! Try again.\n\n");
        } 
        else if (guess > secret) 
        {
            printf("Too High! Try again.\n\n");
        } 
        else 
        {
            printf("\nCongratulations! You guessed it in %d attempt(s)!\n", attempts);
        }

    } while (guess != secret);

    return 0;
}
