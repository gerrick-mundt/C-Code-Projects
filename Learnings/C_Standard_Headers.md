# Standard C Header Files and Functions

This document provides an overview of five key C standard library header files. For each, you'll find tables listing commonly used functions with their **purpose**, **inputs**, and **outputs**.

---

## 1. `<stdio.h>` – Standard Input and Output

Provides functions for console and file input/output.

| Function      | Purpose                                | Inputs                                             | Outputs                    |
|---------------|----------------------------------------|----------------------------------------------------|----------------------------|
| `printf()`    | Print formatted output to console      | Format string, optional variables                  | Number of characters printed |
| `scanf()`     | Read formatted input from console      | Format string, pointers to variables               | Number of items read       |
| `fgets()`     | Read a line/string from input safely   | Buffer (char*), buffer size, input stream (`FILE*`) | Buffer pointer or `NULL` on error |
| `fopen()`     | Open a file                            | File name, mode (`"r"`, `"w"`, etc.)               | File pointer (`FILE *`)    |
| `fclose()`    | Close a file                           | File pointer                                       | `0` on success, `EOF` on error |
| `fread()`     | Read binary data from a file           | Pointer to buffer, size, count, file pointer       | Number of items read       |
| `fwrite()`    | Write binary data to a file            | Pointer to data, size, count, file pointer         | Number of items written    |
| `fprintf()`   | Print formatted output to file         | File pointer, format string, variables             | Number of characters printed |
| `fscanf()`    | Read formatted input from file         | File pointer, format string, pointers              | Number of items read       |
| `getchar()`   | Read a single character from stdin     | None                                               | Character read (`int`)     |
| `putchar()`   | Write a character to stdout            | Character                                          | Character written (`int`)  |

---

## 2. `<stdlib.h>` – Standard Library Utilities

Provides memory management, conversions, process control, and more.

| Function      | Purpose                                | Inputs                                 | Outputs                    |
|---------------|----------------------------------------|----------------------------------------|----------------------------|
| `malloc()`    | Allocate memory dynamically             | Size in bytes                          | Pointer to allocated memory (`void *`) |
| `calloc()`    | Allocate zero-initialized memory        | Number of elements, size per element   | Pointer to allocated memory |
| `realloc()`   | Resize previously allocated memory      | Pointer, new size                      | Pointer to resized memory  |
| `free()`      | Deallocate memory                       | Pointer to allocated memory            | None                       |
| `exit()`      | Terminate the program                   | Exit status (`int`)                    | None (program exits)       |
| `atoi()`      | Convert string to `int`                 | String (`char *`)                      | Integer (`int`)            |
| `atof()`      | Convert string to `float`               | String (`char *`)                      | Floating point (`double`)  |
| `strtol()`    | Convert string to `long`                | String, end pointer, base              | Long integer (`long`)      |
| `rand()`      | Generate a pseudo-random number         | None                                   | Random integer (`int`)     |
| `srand()`     | Seed the random number generator        | Seed value (`unsigned int`)            | None                       |
| `system()`    | Execute a system command                | Command string                         | Exit status of command     |

---

## 3. `<string.h>` – String and Memory Manipulation

Provides functions for C-style string and memory operations.

| Function      | Purpose                                | Inputs                                 | Outputs                    |
|---------------|----------------------------------------|----------------------------------------|----------------------------|
| `strlen()`    | Get length of a string                 | String (`char *`)                      | Length of string (`size_t`) |
| `strcpy()`    | Copy string                            | Destination, source                    | Destination pointer         |
| `strncpy()`   | Copy string with limit                 | Destination, source, max characters    | Destination pointer         |
| `strcat()`    | Concatenate strings                    | Destination, source                    | Destination pointer         |
| `strncat()`   | Concatenate strings with limit         | Destination, source, max characters    | Destination pointer         |
| `strcmp()`    | Compare two strings                    | String1, String2                       | 0 if equal, <0 or >0 otherwise |
| `strncmp()`   | Compare with limit                     | String1, String2, max characters       | Same as `strcmp()`         |
| `memcpy()`    | Copy memory block                      | Destination, source, size              | Destination pointer         |
| `memmove()`   | Copy memory safely (handles overlap)   | Destination, source, size              | Destination pointer         |
| `memset()`    | Fill memory with a value               | Pointer, value, size                   | Pointer to memory block     |
| `strchr()`    | Find first occurrence of char          | String, character                      | Pointer to character found  |
| `strstr()`    | Find substring                         | String, substring                      | Pointer to substring found  |

---

## 4. `<math.h>` – Math Functions

Provides common math functions for floating-point operations.

| Function      | Purpose                                | Inputs                                 | Outputs                    |
|---------------|----------------------------------------|----------------------------------------|----------------------------|
| `sqrt()`      | Square root                            | Number (`double`)                      | Square root (`double`)     |
| `pow()`       | Raise to a power                       | Base, exponent (`double`)              | Result (`double`)          |
| `sin()`       | Sine of angle (radians)                | Angle (`double`)                       | Sine value (`double`)      |
| `cos()`       | Cosine of angle                        | Angle (`double`)                       | Cosine value (`double`)    |
| `tan()`       | Tangent of angle                       | Angle (`double`)                       | Tangent value (`double`)   |
| `log()`       | Natural logarithm (base e)             | Number (`double`)                      | Log value (`double`)       |
| `log10()`     | Base-10 logarithm                      | Number (`double`)                      | Log value (`double`)       |
| `fabs()`      | Absolute value (float/double)          | Number (`double`)                      | Absolute value (`double`)  |
| `ceil()`      | Round up to nearest integer            | Number (`double`)                      | Result (`double`)          |
| `floor()`     | Round down to nearest integer          | Number (`double`)                      | Result (`double`)          |
| `fmod()`      | Remainder of division                  | Dividend, divisor (`double`)           | Remainder (`double`)       |

> **Note:** Link with `-lm` when compiling with GCC:
> ```bash
> gcc your_file.c -lm
> ```

---

## 5. `<ctype.h>` – Character Classification and Conversion

Provides macros and functions to test and manipulate individual characters.

| Function      | Purpose                                | Inputs                     | Outputs                    |
|---------------|----------------------------------------|----------------------------|----------------------------|
| `isalpha()`   | Check if character is a letter         | Character (`int`)          | Non-zero if true, 0 otherwise |
| `isdigit()`   | Check if character is a digit          | Character (`int`)          | Non-zero if true           |
| `isalnum()`   | Check if letter or digit               | Character (`int`)          | Non-zero if true           |
| `isspace()`   | Check if whitespace                    | Character (`int`)          | Non-zero if true           |
| `isupper()`   | Check if uppercase letter              | Character (`int`)          | Non-zero if true           |
| `islower()`   | Check if lowercase letter              | Character (`int`)          | Non-zero if true           |
| `toupper()`   | Convert to uppercase                   | Character (`int`)          | Uppercase character (`int`)|
| `tolower()`   | Convert to lowercase                   | Character (`int`)          | Lowercase character (`int`)|

---

## ✅ Summary

These five headers provide the foundational building blocks for most C programs. Mastering them allows you to:

- Read/write from the console and files
- Manage memory
- Manipulate strings
- Perform math operations
- Handle and analyze characters

For best practices and safety, always validate input and watch out for buffer overflows (especially with `scanf()` and `strcpy()`).

