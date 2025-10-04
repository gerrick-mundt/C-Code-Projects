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
- `&x` = the address of `x` (5000)
- `p` is a pointer (it stores the number 5000)
- So memory might look like this:

| Address | Contents      | Meaning           |
|---------|---------------|-----------------|
| 5000    | 00000000      | x, byte 1        |
| 5001    | 00000000      | x, byte 2        |
| 5002    | 00000000      | x, byte 3        |
| 5003    | 00001010      | x, byte 4 (10)   |
| 6000    | 00010011      | p stores 5000    |


## 3. How to use a pointer?
- There are two main things that you can do with a pointer:
> 1) Find the address of a variable (`&` operator)
> ```c
> printf("%p\n", &x);
> ```
> 2) Access the value stored at that address (`*` operator)
> ```c
> printf("%d\n", *p);
> ```

## 4. When to use a pointer?
