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
