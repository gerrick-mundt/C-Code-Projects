#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "guess.h"

// Execute main function
int main()
{
    // This counts the number of seconds since
    // Jan 1, 1970 and each second past equals a
    // different number. Time returns the current
    // number of seconds since 1/1/1970, and NULL says
    // "Don't store this result anyware else;
    srand(time(NULL));

    // Generate a random number between 0 & 9.
    // Think of rand as a playlist, that always 
    // starts at the same song. This is why you 
    // use srand above, to actually make it random
    int rand_value = rand() % 10;

    // Call guess function with this random value
    // as its integer input
    guess_function(rand_value);

    // Return 0 upon sucessful compilation of main
    return 0;
}
