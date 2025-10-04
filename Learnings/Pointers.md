# Pointers
## 1. What is a pointer?
- A pointer is just a variable that stores a memory address of another variable
- Pointers can be thought of like a note that tells the compiler to "look in mailbox #x"

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
