# Pointers
## 1. What is a pointer?
- A **pointer** in C is a variable that **stores the memory address** of another variable.
- Instead of holding a value directly (like `10` or `'A'`), a pointer holds the **location in memory** where that value is stored.

## 2. Pointer Example
```c
int x = 10;  // Declare an integer variable
int *p = &x; // Declare a pointer to x
```
- `x` is a variable stored in memeory (say addresses 5000-5003)
- `&x` = the address of `x` (5000, the beginning address segement)
- `p` is a pointer (it stores the number 5000)
- Memory for this example might look like this:

| Address | Contents      | Meaning           |
|---------|---------------|-----------------|
| 5000    | 00000000      | x, byte 1        |
| 5001    | 00000000      | x, byte 2        |
| 5002    | 00000000      | x, byte 3        |
| 5003    | 00001010      | x, byte 4 (10)   |
| 6000    | 00010011      | p stores 5000    |


## 3. How to use a pointer in C?
- Pointers in C are used to **work with memory addresses directly**.  
- They allow you to:
> 1) Access (read/write) the value stored at an address.
> 2) Pass variables to functions **by reference** (so the function can modify the original).
> 3) Dynamically allocate memory on the heap.
> 4) Work with arrays and strings efficiently.

---

### 3.1. Declaring and Assigning a Pointer

```c
int x = 25;      // normal variable
int *p = &x;     // pointer p stores the address of x
```
### 3.2. Dereferencing a Pointer
```c
#include <stdio.h>

int main() {
    int x = 25;
    int *p = &x;   // p points to x

    printf("x = %d\n", x);      // prints 25
    printf("p = %p\n", p);      // prints address of x
    printf("*p = %d\n", *p);    // dereference p → prints value of x (25)

    *p = 50;                    // change the value at the address
    printf("x = %d\n", x);      // now x is 50

    return 0;
}
```
### 3.3. Pointers and Functions
- Pointers let functions modify the original variables stored value at the memory address.
```c
#include <stdio.h>

void addOne(int *n) {
    *n = *n + 1;   // modifies the value at the address
}

int main() {
    int x = 10;
    addOne(&x);    // pass the address of x
    printf("x = %d\n", x);  // prints 11
    return 0;
}
```
### 3.4. Pointers and Arrays
- An array's name is actually a pointer to its first element
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;   // arr "decays" to &arr[0]

    printf("%d\n", *p);     // 10
    printf("%d\n", *(p+1)); // 20
    printf("%d\n", *(p+2)); // 30

    return 0;
}

### 3.5. Dynamic Memory (Heap)
- Using pointers with `malloc` to allocate memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));  // allocate memory for 1 int
    *p = 99;                       // assign value at allocated space
    printf("%d\n", *p);            // prints 99

    free(p);   // release memory
    return 0;
}

## Summary
- `&`: Get the address of a variable
- `*`: Dereference a pointer (get/set the value at that memory address)

