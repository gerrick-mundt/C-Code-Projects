#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    // Define variables
    int max_length = 100; // Maximum number of list items
    int max_chars = 50; // Maximum characters per list item
    int counter_1 = 0; // Input counter
    int counter_2 = 0; // Print counter

    // Define to-do list array
    char array[max_length][max_chars];
    
    // Take user input loop
    while(counter_1 < max_length)
    {
        // Request user input
        printf("Item %d", );

        // Case where user inputs a value
        if(fgets(array[counter_1], max_chars, stdin) == NULL)
        {
            break;
        }

        // Case where user inputs 0
        else
        {
            ;
        }
    }

    // When use input is complete, print list

    return 0;
}
