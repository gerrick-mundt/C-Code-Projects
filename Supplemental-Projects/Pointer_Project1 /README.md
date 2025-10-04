# Purpose
### Purpose

The purpose of this supplemental project was to practice working with **memory addresses** in C. I wrote a program that changes a variable using its memory address via the standard library function `scanf`.  

In `scanf`, the `&x` provides the function with the **address of the local `x` variable** (unless a global variable is explicitly specified). The function then writes the user’s input directly into that memory location, updating the value of `x`.  

This exercise helped me become familiar with using the **variable address operator (`&`)** and understanding how pointers interact with memory in C.

# Code
```c
#include <stdio.h>
#include <stdlib.h>

int x = 10;

int main ()
{
    // Print what the value of x currently is
    printf("The value of x = %i \n", x);

    // Ask for user input
    printf("Enter the new value you want x to have: ");

    // Take and store the user input
    scanf(" %i", &x);

    // Print the new value out so the user knows it changed
    printf("The new value of x = %i", x);

    return 0;
}
```
# Terminal Example
```c
The value of x = 10 
Enter the new value you want x to have: 16
The new value of x = 16
```
