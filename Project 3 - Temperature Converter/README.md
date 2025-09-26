# Project 3: Temperature Converter

## Overview / Purpose
This project implements a temperature conversion program in C.  
The program allows the user to input a temperature value and specify the unit as Celsius (`C`) or Fahrenheit (`F`).  
It converts the temperature to the other unit and displays the result.  
This project reinforces concepts such as functions, conditional statements, `switch` statements, standard libraries (`stdio.h`, `stdlib.h`, `math.h`), and handling invalid input using `NAN`.

---

## Project Level
- **Beginner to Intermediate**  
- Position: 3/40 in C project roadmap

---

## Inputs and Outputs
| Input | Output | Description |
|-------|--------|-------------|
| User’s temperature value (`float`) | Converted temperature (`float`) | Converts Celsius to Fahrenheit or Fahrenheit to Celsius |
| User’s temperature type (`char`) | Feedback string | Indicates the input type and conversion or prints an error if invalid |

---

## Features / Behavior
- Accepts both uppercase and lowercase characters for temperature type (`C` / `F`)  
- Uses a `switch` statement to handle conversion logic  
- Handles invalid input and prints a clear error message  
- Returns `NAN` for invalid input to differentiate from valid temperature values  
- Prints the converted temperature with two decimal places for clarity  

---

## Progression / Steps Taken
1. Designed the program structure with separate files:  
   - `main.c` handles user input, output, and calls the conversion function.  
   - `temp_converter.c` handles the conversion logic.  
   - `temp_converter.h` declares the function prototype.  
2. Implemented `temp_converter()` using a `switch` statement for clean conditional logic.  
3. Added support for both uppercase and lowercase input characters.  
4. Incorporated `NAN` from `<math.h>` to handle invalid temperature type input.  
5. Tested with multiple inputs to ensure correct conversions and proper handling of invalid inputs.  

---

## Called Functions
| Function Name | Parameters | Return Type | Description |
|---------------|-----------|------------|-------------|
| `temp_converter` | `(float input_temp, char temp_type)` | `float` | Converts the input temperature to the other unit. Returns `NAN` if the input type is invalid. |

- **Standard library functions used:**
  - `printf()` → display prompts, conversion results, and error messages  
  - `scanf()` → read temperature value and type from the user  
  - `isnan()` → detect invalid conversion results when `NAN` is returned  

---

## Learnings
- In a `switch` statement, you write `case` followed by the value you want to match.  
  You can have multiple `case` labels execute the same code by listing each case consecutively and then specifying the shared behavior once below them.
- You don’t need to declare a separate variable to return a value from a function.  
  You can perform calculations directly in the `return` statement and return the result immediately without using a declared variable.


## Code Structure / Headers
- **Header File:** `temp_converter.h`
```c
#ifndef TEMP_CONVERTER_H
#define TEMP_CONVERTER_H

// Called function used in main to calculate temperature conversion
// Returns NAN if the input type is invalid
float temp_converter(float input_temp, char temp_type);

#endif

