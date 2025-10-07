# Purpose
This program takes user input as a string and examines its contents. If the input consists entirely of digits, it converts the input to an integer and prints the value. If the input contains any non-digit characters, it is treated as a string and printed as-is.

# Called Functions

| Function | Header | Description | Input | Output |
|----------|--------|-------------|-------|--------|
| `atoi`  | `<stdlib.h>` | Converts a string of characters that represents a number into an integer. Reads the string character by character, converting digits at the start into an integer until it reaches a non-digit character or the end of the string. | A string (char array) representing a number, e.g., `"123"` or `"-45"`. | An integer corresponding to the numeric value in the string. Returns `0` if the string does not start with a digit. |
| `isdigit` | `<ctype.h>` | Checks whether a single character is a decimal digit (`'0'`–`'9'`). | A single character (passed as an int, often a `char`). | Returns `0` if the character is not a digit, or a nonzero value if it is a digit. The exact nonzero value is implementation-defined. |


# Code
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // for isdigit()
#include <stdlib.h> // for atoi()

int main(void)
{
    // Generate a single string buffer that holds user input
    char buffer[100];

    // Declare variable
    int isNumber = 1; // Assume that the input value is an integer

    // Ask for user input
    printf("Input either a string or an integer: ");

    // Take input stream and store in buffer
    fgets(buffer, sizeof(buffer), stdin);

    // Remove newline that is auto created by fgets
    buffer[strcspn(buffer, "\n")] = '\0';

    // Check each character to see if the string is all digits
    for(int i = 0; i < strlen(buffer); i++)
    {
        // Case for if character is not a digit
        if(isdigit(buffer[i]) == 0)
        {
            isNumber = 0;
            break;
        }
    }

    // Print the user generated string or integer
    // Case 1: 
    if(isNumber == 0)
    {
        printf("The string you input is: %s", buffer);
    }

    // Case 2: 
    else
    {
        int value = atoi(buffer);
        printf("The integer you input is: %d", value);
    }
}
```
# Terminal Examples
## Integer Input
```c
Input either a string or an integer: 3333
The integer you input is: 3333
```

## String Input
```c
Input either a string or an integer: ferv54g45
The string you input is: ferv54g45
```
