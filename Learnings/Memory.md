# Memory
## 1. The smallest building block of memory: the bit
- A bit is just a switch
- It can be 0 (off) or 1 (on)
- Think of a bit like a light switch in a huge row of switches:
`01001110`

## 2. Grouping bits into bytes
- Computers group bits into bytes (8-bits per byte)
- Bits by themselves do not mean anything until we agree on how to interpret them. If we interpret `01000001` as a number in base-2, it equals 65. However, if we interpret `01000001` as character (text symbol), its `A` ub ASCII. In this case, they are the same bits, however, they hold different meanings depending on the context.

## 3. Memory in more detail
### 3.1. RAM
- Memory is a massive array of bits stored in your RAM (Random Access Memory)
- Your CPU can read/write any byte address (0 to 8,589,934,591)
- RAM is volatile - when you turn your computer power, everything disappears
- In modern computers, each memory address corresponds to 8-bits.

| Address | Contents (bits) | Possible Meaning |
|---------|-----------------|------------------|
| 0       | 01000001        | 'A' (character)  |
| 1       | 00001010        | 10 (number)      |
| 2       | 11111111        | -1 (if signed)   |

- For values larger than a single byte (like integers, floats, or doubles), the computer stores them across multiple consecutive addresses in memory.
- In the example below, the variable int `x = 10` begins at address 5000. Since an `int` requires 4 bytes, the compiler automatically reserves addresses 5000 through 5003 to hold the binary representation of 10.

| Address | Contents (bits) |
|---------|-----------------|
| 5000    | 00000000        |
| 5001    | 00000000        |
| 5002    | 00000000        |
| 5003    | 00001010        |

### 3.2 The Stack - Temporary storage
- The stack is a region in memory that grows and shrinks automatically as functions are called and returned
- Where it lives:
> In you virtual address space (high addresses)
> Usually 1-8 MB in size (OS sets a limit)
> Physically: Scattered across actual RAM chips (OS decides)
- How it works: The CPU has a special register called the Stack Pointer (SP) that always poits to the "Top" of the stack
- Here is an example:
```c
void func2() {
    int c = 30;  // Push onto stack
}

void func1() {
    int b = 20;  // Push onto stack
    func2();
}

int main() {
    int a = 10;  // Push onto stack
    func1();
}
```

- Stack memory as execution process for the above example:
  
```
START (main called):
SP → 0x7FFFFFF0: [10][0][0][0]  ← a
     0x7FFFFFEC: [return address]

AFTER func1 called:
     0x7FFFFFF0: [10][0][0][0]  ← a
     0x7FFFFFEC: [return address from main]
SP → 0x7FFFFFE8: [20][0][0][0]  ← b
     0x7FFFFFE4: [return address]

AFTER func2 called:
     0x7FFFFFF0: [10][0][0][0]  ← a
     0x7FFFFFEC: [return address from main]
     0x7FFFFFE8: [20][0][0][0]  ← b
     0x7FFFFFE4: [return address from func1]
SP → 0x7FFFFFE0: [30][0][0][0]  ← c
     0x7FFFFFDC: [return address]

AFTER func2 returns:
     0x7FFFFFF0: [10][0][0][0]  ← a
     0x7FFFFFEC: [return address from main]
SP → 0x7FFFFFE8: [20][0][0][0]  ← b
     0x7FFFFFE4: [garbage]  ← c is "gone" (SP moved up)

AFTER func1 returns:
SP → 0x7FFFFFF0: [10][0][0][0]  ← a
     0x7FFFFFEC: [garbage]  ← b is "gone"
```
### 3.3 The Heap - Perminant Storage
- 

## 4. Pointers
- A pointer is just a variable that stores a memory address of another variable
- Pointers can be thought of like a note that tells the compiler to "look in mailbox #x"
- Example: 
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


### 4.2. How to use a pointer?
- There are two main things that you can do with a pointer:
> 1) Find the address of a variable (`&` operator)
> ```c
> printf("%p\n", &x);
> ```
> 2) Access the value stored at that address (`*` operator)
> ```c
> printf("%d\n", *p);
> ```
