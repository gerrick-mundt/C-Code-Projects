# Memory
## 1. The smallest building block of memory: the bit
- A bit is just a switch
- It can be 0 (off) or 1 (on)
- Think of a bit like a light switch in a huge row of switches:
`01001110`

## 2. Grouping bits into bytes
- Computers group bits into bytes (8-bits per byte)
- Bits by themselves do not mean anything until we agree on how to interpret them. If we interpret `01000001` as a number in base-2, it equals 65. However, if we interpret `01000001` as character (text symbol), its `A` ub ASCII. In this case, they are the same bits, however, they hold different meanings depending on the context.

## 3. Memory
- Think of memory as a long street of mailboxes, where each mailbox stores exactly 1 byte = 8 bits.
- In this example, each mailbox has a number (address) so we know where it is. Each address holds the contents that are equivilant to a byte (8-bits).
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

## 4. Pointers
- A pointer is just a variable that stores an address of another variable
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

### 4.1. How to use a pointer
- There are two main things that you can do with a pointer:
> 1) Find the address of a variable (`&` operator)
> ```c
> printf("%p\n", &x);
> ```
> 2) Access the value stored at that address (`*` operator)
> ```c
> printf("%d\n", *p);
> ```
