# stdio.h
## What is it?
stdio.h is a header file that provides functions for reading and writing data (input/output opertions)
## Common functions
### printf
- This function outputs formatted text to the console.
- Example:
```c
printf("Output information to be provided here");
```
- The console would show:
```c
Output information to be provided here
```
### scanf
- This function reads user input from the console
- The function has the following inputs: `scanf("format string", &var1, &var2, ...)`
- Example:
```c
scanf("%d %f", &int_variable, &float_variable);
```
- After `scanf` is executed, the input values are stored in the memory addresses provided as arguments, and interpreted according to the types specified in the format string.
### 
