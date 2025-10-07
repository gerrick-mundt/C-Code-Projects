# Project 4: Digital To-Do List
## Overview/Purpose
This program implements a simple to-do list capable of storing up to 50 items, with each item containing up to 100 characters. The user can iteratively enter list items, one per line, until they have finished entering their tasks. Entering either `0` or pressing **Enter** on an empty line ends the input process, after which the program displays the complete to-do list.

This project strengthened my understanding of standard library functions from both `<stdio.h>` and `<string.h>`, particularly for handling user input and string manipulation.

## Project Level
- **Beginner**  
- Position: 4/40 in C project roadmap

---
## Features / Behavior
- User inputs are gathered and stored using `fgets()` from `<stdio.h>`.
- The inputs are stored in a two-dimensional character array (buffer), where each row represents a separate string. Although the entire array occupies one contiguous block of memory, each row acts as an independent string within that block.

## Memory Visualization

The memory layout would look like this:

| Row / Index     | 0x1000 | 0x1001 | 0x1002 | 0x1003 | 0x1004 |
|-----------------|--------|--------|--------|--------|--------|
| `buffer[0]`     | 'T'    | 'a'    | 's'    | 'k'    | '\0'   |

| Row / Index     | 0x1005 | 0x1006 | 0x1007 | 0x1008 | 0x1009 |
|-----------------|--------|--------|--------|--------|--------|
| `buffer[1]`     | 'G'    | 'o'    | '\0'   | ?      | ?      |

| Row / Index     | 0x100A | 0x100B | 0x100C | 0x100D | 0x100E |
|-----------------|--------|--------|--------|--------|--------|
| `buffer[2]`     | 'E'    | 'a'    | 't'    | '\0'   | ?      |

**Notes:**
- In this example, each row can hold up to 5 characters (`max_chars`), including the null terminator `\0`.
- The entire array is stored as **one contiguous block of memory**.
- Each `buffer[i]` acts as an **independent string** in the program.
- Extra spaces in each row remain unused if the string is shorter than `max_chars`, these are represented by the question marks (?).

## Called Functions
### stdio.h Functions
- **`fgets`**: Reads a line of text from an input stream into a character array (buffer). Below are the input parameters for this function:
  
> 1. (`char *str`): Pointer to the first element of the character array where the input will be stored.
> 2. (`int n`): Maximum number of characters to read, including the null terminator `\0`.
> 3. (`FILE *stream`): The input stream to read from, usually `stdin` for keyboard input.

### string.h Functions
- **`strlen`**: String Length. Returns the length of a string (number of characters before the null terminator (\0)
> 1. (`str`): Pointer to the null-terminated string whose length you want to measure

- **`strcmp`**: String Compare. Compares two strings
> 1. (`str 1`): Pointer to the first null terminated string
> 2. (`str 2`): Pointer to the first null terminated string

- **`strcspn`**: Sting Complement Span. This returns the index of the first occurrence of any character from a set of characters in a string
> 1. (`str 1`): Pointer to the string being scanned
> 2. (`str 2`): Pointer to the set of characters to search for

## Learnings
- You can use `fgets` to take string inputs from the users keyboard and store it in a buffer (block of memory for characters).
- When you use `fgets`, it automatically includes a newline character (`\n`) that the user enters when they press ENTER. To remove this new line character, you can use `strcspn`, which finds the `\n` and replaces it with the NULL terminator (`\0`). If you do not remove the newline, you may see unexpected behavior when printing or comparing strings.
- To get the length of a string, you can use `strlen`. This is useful for checking if the user typed `ENTER` without typing anything (an "empty" input).
- To compare two strings, you can use the `strcmp` function. This function returns 0 if the strings are exactly equal - for example, to check if the user entered `"0"`  as an exit condition.

## Code Structure

```c
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
``` 
