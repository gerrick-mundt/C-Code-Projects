# Project 2: Number Guessing Game

## Overview / Purpose
This project implements a simple number guessing game in C.  
The program generates a random number between 0 and 9, and the user must guess the number.  
The program provides feedback on whether the guess is too high or too low and continues prompting until the correct number is entered.  
This project reinforces concepts such as loops, conditional statements, function calls, standard libraries (`stdlib.h`, `time.h`), and random number generation.

---

## Project Level
- **Beginner**
- Position: 2/40 in C project roadmap

---

## Inputs and Outputs
| Input | Output | Description |
|-------|--------|-------------|
| User’s integer guess | Feedback string | Informs the user if their guess is too high, too low, or correct |
| None (random number is generated internally) | Random integer 0–9 | Number to be guessed |

---

## Features / Behavior
- Random number generation using `rand()` seeded with `srand(time(NULL))`  
- Provides feedback if the guess is **too high** or **too low**  
- Continues prompting until the correct number is guessed  
- Prints the correct number when the user guesses it correctly  

---

## Progression / Steps Taken
1. Designed program structure: `main.c` handles random number generation and calls `guess_function()`.  
2. Implemented `guess_function()` to handle user input, comparison logic, and feedback.  
3. Added a `while` loop to repeatedly request input until the correct guess is entered.  
4. Tested with various random numbers to ensure correct feedback and loop behavior.

---

## Called Functions
| Function Name | Parameters | Return Type | Description |
|---------------|-----------|------------|-------------|
| `guess_function` | `(int rand_value)` | `void` | Handles user input for guesses, compares against the random number, and prints feedback until the correct number is guessed. |

- **Standard library functions used:**
  - `printf()` → display prompts and feedback  
  - `scanf()` → read guesses from the user  
  - `rand()` → generate random numbers  
  - `srand()` → seed the random number generator  
  - `time(NULL)` → obtain the current time to seed `srand()`  

---

## Logic Types Used
### if statement
- An `if` statement executes a block of code only if a specified condition is true. It’s used to make decisions in a program, allowing different code paths based on conditions.
- Below is an example of an if statement:
  
```c

    if (value == 1) {
        printf("Value is 1\n");
    } else if (value == 2) {
        printf("Value is 2\n");
    } else {
        printf("Value is something else\n");
    }
```
### while loop
- A `while` loop repeatedly executes a block of code as long as a specified condition is true. It’s useful when the number of iterations is not known in advance and depends on a condition being met during execution.
- Below is an example of an if statement:

```c
    while (counter < /* some limit */)
    {
        printf("Counter is %d\n", counter);
        counter++;  // update counter to eventually end loop
    }
