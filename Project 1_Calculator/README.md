# Project 1: Calculator

## Overview / Purpose
This project implements a simple command-line calculator in C.  
It allows the user to input two integers and a mathematical operator (`+`, `-`, `*`, `/`) and outputs the result of the calculation.  
This project is designed to reinforce basic C programming concepts including input/output, function calls, `switch` statements, and simple error handling.

---

## Project Level
- **Beginner**
- Position: 1/40 in C project roadmap

---

## Inputs and Outputs
| Input | Output | Description |
|-------|--------|-------------|
| Two integers (`a` and `b`) | Integer result | Numbers to be used in the calculation |
| Character operator (`+`, `-`, `*`, `/`) | Result of operation | Mathematical operation to perform on the two integers |

---

## Features / Behavior
- Supports addition, subtraction, multiplication, and division  
- Handles division by zero by returning `0` and avoiding runtime errors  
- Alerts the user if an unsupported operator is entered  

---

## Progression / Steps Taken
1. Designed program structure: `main.c` handles input/output, `calculator.c` handles computation  
2. Implemented `calculator` function using a `switch` statement to handle operators  
3. Added error handling for division by zero and invalid operators  
4. Tested program with various integer inputs and operator combinations  

---

## Called Functions
| Function Name | Parameters | Return Type | Description |
|---------------|-----------|------------|-------------|
| `calculator` | `(int a, int b, char op)` | `int` | Performs the calculation based on the operator. Handles addition, subtraction, multiplication, division, and invalid operator cases. |

- **Standard library functions used:**
  - `printf()` → displays prompts and results
  - `scanf()` → reads input from the user

---

# Logic Types Used
## Switch Function
- Below is a generalization of how a switch function is used
```c
    switch (value) {
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        case 3:
            printf("Case 3\n");
            break;
        // Add more cases as needed
        default:
            printf("Default case\n");
            break;
```
---

## Code Structure / Headers
- **Header File:** `calculator.h`
  ```c
  #ifndef CALCULATOR_H
  #define CALCULATOR_H

  int calculator(int a, int b, char op);

  #endif
  
---

## Challenges
- **Reading the operator character correctly**:  
  When reading the operator after entering integers, using `scanf("%c", &op);` would read a leftover newline character from the previous input instead of the actual operator.  
  **Solution:** Add a space before `%c` to skip whitespace:
  ```c
  scanf(" %c", &op);

