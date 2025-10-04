# Purpose
In this supplemental project, I wrote a program that changes a variable using its memory address via the standard library function `scanf`.  In `scanf`, the `&x` gives the function the **address of the local `x` variable** (unless you explicitly refer to a global variable). `scanf` then writes the user’s input directly into that memory location, updating the value of `x`. I did this to familiarize myself with using the variable address (`&`).

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
