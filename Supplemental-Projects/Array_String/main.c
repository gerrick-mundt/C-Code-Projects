#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    // Define variables
    int i, j, string_total = 5, buffer = 50;

    // Define a character array
    // means that array is a 2D array (array of arrays) of chars
    char array[string_total][buffer];

    // Input values into array
    for(i = 0; i < string_total; i++)
    {
        // ask for a to-do string input
        printf("Please provide user to-do list string item: ");

        // Get line straight from user keyboard
        fgets(array[i], buffer, stdin);

        // Get rid of the new line that can issues (remove it from the character string)
        // Accessing array[i][index] lets you read or write the character position at "index"
        // So the portion: array[i][strcspn(array[i], "\n")], represents a single character.
        // The \0 represents the character value you are assigning to it (null terminator)
        array[i][strcspn(array[i], "\n")] = '\0';

        // Generate a space 
        printf("\n");
    }

    // Print input list statement
    printf("Here is the list that you input: \n");

    // Print all strings that were input by the user
    for(j = 0; j < string_total; j++)
    {
        printf("String %d: %s\n",j, array[j]);
    }

    return 0;
}
