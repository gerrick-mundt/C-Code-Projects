# Project

## Code
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // for isdigit()
#include <stdlib.h> // for atoi()

int main(void)
{
    char input[100]; // declare input buffer
    int isNumber = 1; // Assume number until proven otherwise

    // Request user input
    printf("Enter something (string or integer): ");

    // Store user input
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline character to avoid fgets errors
    input[strcspn(input, "\n")] = '\0';

    // Check if all characters are digits
    for(int i = 0; i < strlen(input); i++)
    {
        // Case where not all characters are digits
        // Use isdigit function to see if the character is a digit
        if(isdigit(input[i]) == 0)
        {
            isNumber = 0;
            break;
        }
    }

    // If all the characters are digits, convert the input to an integer
    if(isNumber == 1)
    {
        int value = atoi(input);
        printf("You entered an integer: %d\n", value);
    }

    // If not all characters are integers, print user input string
    else
    {
        printf("You entered the following string: %s", input);
    }

    return 0;
}
```
