# Purpose
This program was written to gain familiarity with writing strings to arrays. This is a supplemental project that will be used towards helping me generate my 4th project.

# Called Functions
## fgets
- `fgets` is a function from **`<stdio.h>`** that reads a line of input from a stream (keyboard via `stdin`) and stores it in a **char array**.  
- In a **2D char array**, each row stores one string, and the columns store the individual characters of that string.  
- **Inputs (arguments) of `fgets`:**  
> 1. **Buffer (char array):** Where the input will be stored, including space for the **null terminator `\0`**  
> 2. **Maximum number of characters:** How many characters to read, **including the null terminator**  
> 3. **Input source (`FILE*` stream):** Where the string comes from (`stdin` for keyboard, or a file pointer for a file)

### Explanation of `fgets(tasks[i], sizeof(tasks[i]), stdin);`

This line reads **one line of input from the keyboard** and stores it into the `i`-th row of the 2D array `tasks`.

---

### 1. `tasks[i]` → the buffer
- `tasks` is a **2D char array**, e.g., `char tasks[5][50];`.
- `tasks[i]` refers to the **i-th row**, which is itself a **char array** that can store one string (up to 49 characters plus the null terminator `\0`).
- In C, arrays decay into pointers, so `tasks[i]` is effectively a **pointer to the first character** of that row.
- This is where `fgets` will **store the input characters**.

---

### 2. `sizeof(tasks[i])` → maximum number of characters
- `sizeof(tasks[i])` gives the **size of the i-th row in bytes**, which is `50` in this case.
- Tells `fgets` the **maximum number of characters it can safely read**, including space for the **null terminator `\0`**.
- Prevents **buffer overflow**, which could crash your program.

---

### 3. `stdin` → the input source
- `stdin` stands for **standard input**, usually the keyboard.
- It’s a predefined input stream in C.
- Could be replaced with a file pointer if reading from a file:

```c
FILE *file = fopen("tasks.txt", "r");
fgets(tasks[i], sizeof(tasks[i]), file);
```

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
