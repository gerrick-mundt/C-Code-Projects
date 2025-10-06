# Purpose
This program was written to gain familiarity with writing strings to arrays. This is a supplemental project that will be used towards helping me generate my 4th project.

# Called Functions
## fgets
- `fgets` is a function from **`<stdio.h>`** that reads a line of input from a stream (keyboard via `stdin`) and stores it in a **char array**.  
- In a **2D char array**, each row stores one string, and the columns store the individual characters of that string.  
- **Inputs (arguments) of `fgets`:**  
> 1. **Buffer (char array):** Where the input will be stored, including space for the **null terminator `\0`**  
> 2. **Maximum number of characters:** How many characters to read, **including the null terminator**  
> 3. **Input source (`FILE*` stream):** Where the string comes from (`stdin` for keyboard, or a file pointer for a file)

### Explanation of use in code
```c
fgets(array[i], buffer, stdin);
```
1. `array[i]` → Pointer to the memory location where the first string will be stored
2. `buffer` → the maximum number of characters to read, including the null terminator (\n)
3. `stdin` → the input source, in this case the users keyboard

## strcspn
`strcspn` — This function, declared in the **`<string.h>`** library, returns the number of characters from the beginning of a string up to (but not including) the first occurrence of any character from a specified set of unwanted characters (the reject set). It’s commonly used to find and remove problematic characters like \n from strings in C.

### Explanation of use in code
```c
array[i][strcspn(array[i], "\n")] = '\0';
```
- Accesses the position in the 2D array where the first occurence of the rejected character (`\n`) is found and replaces it with the null terminator (`\0`), effectively trimming the function at that point.
- Before code was implemented this would have been:

| Index      | 0   | 1   | 2   | 3   | 4   | 5    | 6    |
|------------|-----|-----|-----|-----|-----|------|------|
| Character  | 'h' | 'e' | 'l' | 'l' | 'o' | '\n' | '\0' |

- After code was implemented this is:

| Index      | 0   | 1   | 2   | 3   | 4   | 5    | 6    |
|------------|-----|-----|-----|-----|-----|------|------|
| Character  | 'h' | 'e' | 'l' | 'l' | 'o' | '\0' | '\0' |

# Code
```c
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
        // Ask for a to-do string input
        printf("Please provide user to-do list string item: ");

        // Get line straight from user keyboard
        fgets(array[i], buffer, stdin);

        // Get rid of errant \n
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
```
