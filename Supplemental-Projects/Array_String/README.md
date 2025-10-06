# Purpose
This program was written to gain familiarity with writing strings to arrays. This is a supplemental project that will be used towards helping me generate my 4th project.

# Called Functions
## fgets
- `fgets` is a function from **`<stdio.h>`** that reads a line of input from a stream (keyboard via `stdin`) and stores it in a **char array**.  
- In a **2D char array**, each row stores one string, and the columns store the individual characters of that string.  
- **Inputs (arguments) of `fgets`:**  
  1. **Buffer (char array):** Where the input will be stored, including space for the **null terminator `\0`**  
  2. **Maximum number of characters:** How many characters to read, **including the null terminator**  
  3. **Input source (`FILE*` stream):** Where the string comes from (`stdin` for keyboard, or a file pointer for a file)


## strcspn
`strcspn` - 

# Code
```c
#include <stdio.h>
#include <string.h>

int main() {
    int numTasks = 5;
    char tasks[numTasks][50];  // 5 tasks, each up to 49 chars

    // Input tasks
    for (int i = 0; i < numTasks; i++) {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);

        // Remove the newline character added by fgets
        tasks[i][strcspn(tasks[i], "\n")] = '\0';
    }

    // Print tasks
    printf("\nYour To-Do List:\n");
    for (int i = 0; i < numTasks; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
```
