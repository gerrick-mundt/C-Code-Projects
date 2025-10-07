# Project 4: To-Do List
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
- **`fgets`**: Reads a line of text from an input stream into a character array (buffer).
  
> 1. Input 1 (`char *str`): Pointer to the first element of the character array where the input will be stored.
> 2. Input 2 (`int n`): Maximum number of characters to read, including the null terminator `\0`.
> 3. Input 3 (`FILE *stream`): The input stream to read from, usually `stdin` for keyboard input.

### string.h Functions



