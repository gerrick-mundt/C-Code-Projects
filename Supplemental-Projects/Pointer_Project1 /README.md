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
    printf("Enter the new value you want x to have: \n");

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
Enter the new value you want x to have: 
16
The new value of x = 16
```
