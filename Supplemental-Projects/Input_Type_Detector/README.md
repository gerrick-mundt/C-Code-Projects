# Purpose
This program takes user input as a string and examines its contents. If the input consists entirely of digits, it converts the input to an integer and prints the value. If the input contains any non-digit characters, it is treated as a string and printed as-is.

# Called Functions

- `isdigit`: Checks if a single character is a digit (0 through 9).  
  - **Input:** a character (like `'5'` or `'a'`)  
  - **Output:** an integer that tells you whether the character is a digit:  
    - `0` → the character is **not** a digit  
    - nonzero → the character **is** a digit  
  - **Note:** The actual nonzero number is not important — it just means "true".

- `atoi`: 

# Code
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
