#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess_function(int rand_value)
{
    // Declare guess value
    int guess;
    
    // Request a guess from the user
    printf("Make an initial guess of what the number is that I have generated: \n");

    // Take guess from user
    scanf("%i", &guess);

    // Generate a while loop that asks for a new guess until the corrrect number is given
    while(guess != rand_value)
    {
        // If the guess was too large
        if(guess > rand_value)
        {
            printf("Your guess was too large \n");
        }
        // If the guess was too small
        else
        {
            printf("Your guess was too small \n");
        }
        
        // State the guess was incorrect
        printf("Guess again: ");

        // Take new guess
        scanf("%i", &guess);
    }

    // Print that the new guess was correct
    printf("The new guess was correct, the answer is: %i\n", guess);

// Compile: gcc -IInclude -o guessing_game Source/main.c Source/guess.c
}