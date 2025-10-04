# Memory

## 1. The smallest building block of memory: the bit

A bit is just a switch. It can be 0 (off) or 1 (on). Think of a bit like a light switch in a huge row of switches: `01001110`. In modern computers, each memory address corresponds to 8 bits (one byte).

| Address | Contents (bits) | Possible Meaning |
|---------|-----------------|------------------|
| 0       | 01000001        | 'A' (character)  |
| 1       | 00001010        | 10 (number)      |
| 2       | 11111111        | -1 (if signed)   |

## 2. Grouping bits into bytes

Computers group bits into bytes (8 bits per byte). Bits by themselves do not mean anything until we agree on how to interpret them. If we interpret `01000001` as a number in base-2, it equals 65. However, if we interpret `01000001` as a character (text symbol), it's `A` in ASCII. The same bits hold different meanings depending on the context.

## 3. Storing larger values across multiple bytes

For values larger than a single byte (like integers, floats, or doubles), the computer stores them across multiple consecutive addresses in memory. In the example below, the variable `int x = 10` begins at address 5000. Since an `int` requires 4 bytes, the compiler automatically reserves addresses 5000 through 5003 to hold the binary representation of 10.

| Address | Contents (bits) |
|---------|-----------------|
| 5000    | 00000000        |
| 5001    | 00000000        |
| 5002    | 00000000        |
| 5003    | 00001010        |

## 4. Computer memory layout for Mac

When your program runs, it gets a virtual address space divided into different sections:

| Memory Section | Starting Address | Ending Address | Description |
|----------------|------------------|----------------|-------------|
| Kernel Space | 0xFFFFFF8000000000 | 0xFFFFFFFFFFFFFFFF | macOS kernel memory (not accessible to your program) |
| Stack | 0x00007FFEFFFFFFFF | 0x00007FFE00000000 | Local variables, function calls (grows downward) |
| (Unused Space) | 0x00007FFE00000000 | 0x0000000200000000 | Gap between stack and heap |
| Heap | 0x0000000100800000 | 0x00007FFC00000000 | Dynamically allocated memory with malloc (grows upward) |
| BSS Segment | 0x0000000100004000 | 0x00000001007FFFFF | Uninitialized global/static variables |
| Data Segment | 0x0000000100002000 | 0x0000000100003FFF | Initialized global/static variables |
| Text Segment | 0x0000000100000000 | 0x0000000100001FFF | Your compiled program code (instructions) |
| Reserved Low Memory | 0x0000000000000000 | 0x00000000FFFFFFFF | Protected/reserved (helps catch null pointer errors) |

## 5. What happens when you write and execute a program

When you write a C program and run it, different parts of memory are used depending on what your code does.

### The process:

Step 1: You write code
```c
int global_x = 100;        // Goes in Data Segment
int global_y;              // Goes in BSS Segment

int main() {
    int local = 5;         // Goes on Stack
    int *heap_var = malloc(sizeof(int));  // Goes on Heap
    *heap_var = 10;
    
    printf("Hello");       // Code is in Text Segment
    
    free(heap_var);
    return 0;
}
```
Step 2: Compiler creates an executable file. Your source code (.c file) gets compiled into machine instructions. The executable file sits on your hard drive/SSD. It contains all your code and initialized data, but not yet in RAM.

Step 3: You run the program. macOS loads the executable into memory. Different parts go to different memory sections.

| What you write | Where it goes | When it's allocated |
|----------------|---------------|---------------------|
| Your functions and code | Text Segment | At program start (loaded from disk) |
| `int x = 10;` (global) | Data Segment | At program start |
| `int y;` (global, no value) | BSS Segment | At program start (initialized to 0) |
| `int local = 5;` (in function) | Stack | When function is called |
| `malloc(...)` | Heap | When malloc is called |
