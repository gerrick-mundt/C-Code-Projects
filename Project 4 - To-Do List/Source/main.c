#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    // Define variables
    int max_length = 50; // Maximum number of list items
    int max_chars = 100; // Maximum characters per list item
    int counter_1 = 0; // Input counter
    int counter_2 = 0; // Print counter

    // Define to-do list array
    char buffer[max_length][max_chars];
    
    // User input loop
    while(counter_1 < max_length)
    {
        // Request user input using `fgets` with the array, max chars and stdin as input
        printf("List item %d: ", counter_1 + 1);
        char *result = fgets(buffer[counter_1], max_chars, stdin); // input buffer

        // Remove the newline `\n` to eliminate unexpected behavior when printing / comparing strings
        buffer[counter_1][strcspn(buffer[counter_1], "\n")] = 0; // Remove (\n)

        // DEFINE CASES
        // Case 1: User inputs NULL (string length = 0)
        if(strlen(buffer[counter_1]) == 0)
        {
            break;
        }

        // Case 2: User input 0 (string input = exactly 0)
        // strcmp compares the string the user just typed string: strcmp(buffer[counter_1]
        // to the string we are checking it against: "0"
        else if(strcmp(buffer[counter_1],"0") == 0)
        {
            break;
        }

        // Case 3: User entered a string
        else
        {
            counter_1++;
        }
    }

    // Generate pre-print statement
    printf("\n");
    printf("Your finalized to-do list has been generated - \n");
    
    // When user input is complete, print list
    for(counter_2 = 0; counter_2 < counter_1; counter_2++)
    {
        printf("To-do item %d: %s \n", counter_2 + 1, buffer[counter_2]);
    }

    return 0;
}
