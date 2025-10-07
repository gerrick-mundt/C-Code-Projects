# Project 5: Multiplication Table
## Overview/Purpose
The purpose of this project was to gain experience storing integer values in a buffer. It builds on our previous project, where we stored characters in a buffer and printed them. In this project, however, the values stored in the buffer were calculated using mathematical operations before being saved to memory.

## Project Level
Beginner
Position: 5/40 in C project roadmap

## Features/Behavior
## Features / Behavior
- **User Input:** A single integer is requested from the user and stored in memory, where it will be used for multiplication operations.
- **Multiplication Loop:** The input integer is processed through a `for` loop, multiplying it by values from `1` to `12`.
- **Buffer Storage:** Each generated value is stored in the buffer at the position corresponding to the loop counter `i`. Once the loop completes, the buffer contains all 12 values.
- **Printing Loop:** A second `for` loop iterates through the buffer and passes each value to a `printf` statement, displaying the full multiplication table.

## Memory Visualization
As described above, the multiplication values are stored in the buffer, which consists of 12 rows, with each integer occupying 4 bytes. Below is a simplified visual representation:

| Buffer Index | Memory Size | Stored Value      |
|-------------|------------|-----------------|
| 0           | 4 bytes    | input × 1       |
| 1           | 4 bytes    | input × 2       |
| 2           | 4 bytes    | input × 3       |
| 3           | 4 bytes    | input × 4       |
| 4           | 4 bytes    | input × 5       |
| 5           | 4 bytes    | input × 6       |
| 6           | 4 bytes    | input × 7       |
| 7           | 4 bytes    | input × 8       |
| 8           | 4 bytes    | input × 9       |
| 9           | 4 bytes    | input × 10      |
| 10          | 4 bytes    | input × 11      |
| 11          | 4 bytes    | input × 12      |

## Learnings
In this program, I was reminded that arrays can be declared with the int type, and that array indexing starts at 0, so the logic of a for loop must account for this. I was also reminded that in a for loop, the initialization runs first, followed by the loop body and then the increment, repeating this cycle for each iteration.

### Execution Order of a `for` Loop

1. **Initialization** → Runs **once**, before the loop starts.
2. **Condition Check** → If `true`, continue; if `false`, exit the loop.
3. **Loop Body** → Execute the code inside `{ }`.
4. **Increment** → Executed **after the loop body**, then return to step 2 (condition check).

### Left to Right Execution Order of project `for` Loop
| Iteration | i value | Condition `i < 12` | Action (body)                  | Increment (i++) |
|-----------|---------|-------------------|--------------------------------|----------------|
| 1         | 0       | true              | `buffer[0] = input * (0+1) = 5` | i → 1         |
| 2         | 1       | true              | `buffer[1] = input * (1+1) = 10` | i → 2        |
| 3         | 2       | true              | `buffer[2] = input * (2+1) = 15` | i → 3        |
| 4         | 3       | true              | `buffer[3] = input * (3+1) = 20` | i → 4        |
| 5         | 4       | true              | `buffer[4] = input * (4+1) = 25` | i → 5        |
| 6         | 5       | true              | `buffer[5] = input * (5+1) = 30` | i → 6        |
| 7         | 6       | true              | `buffer[6] = input * (6+1) = 35` | i → 7        |
| 8         | 7       | true              | `buffer[7] = input * (7+1) = 40` | i → 8        |
| 9         | 8       | true              | `buffer[8] = input * (8+1) = 45` | i → 9        |
| 10        | 9       | true              | `buffer[9] = input * (9+1) = 50` | i → 10       |
| 11        | 10      | true              | `buffer[10] = input * (10+1) = 55` | i → 11     |
| 12        | 11      | true              | `buffer[11] = input * (11+1) = 60` | i → 12     |
| 13        | 12      | false             | Loop exits                      | –             |

## Code Structure
```c
#include <stdio.h>
#include <math.h>

int main()
{
    // Define Buffer
    int buffer[12];

    // Define counters
    int i, j;

    // Define user input
    int input;

    // Ask for and save user input to memory
    printf("Input an integer that you want a multiplication table for: ");
    scanf("%d", &input);

    // Define logic loop
    for(i = 0; i < sizeof(buffer)/sizeof(buffer[0]); i++)
    {
        // Multiply user input and store in buffer
        buffer[i] = input * (i+1);
    }

    // Print the multiplication table
    for(j = 0; j < (sizeof(buffer)/sizeof(buffer[0])); j++)
    {
        // Print each value out
        printf("Multiplication table value %d = %d\n", j+1, buffer[j]);
    }

    return 0;
}
```
