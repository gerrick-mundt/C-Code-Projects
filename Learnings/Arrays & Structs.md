# Arrays
- An **array** is a collection of elements of the same type stored in a single, continuous block of memory.
- The below example creates 5 integers in a row in memory - one right after another
```c
int numbers[5];
```
- Each element can be accessed by its index:
```c
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
```
## Accessing elements
- You use square brackets to access each element in the array
```c
numbers[2] = 99;
printf("%d\n", numbers[2]); // Prints 99
```
- Also, you can loop through them:
```c
for (int i = 0; i < 5; i++)
{
  printf("%d ", numbers[i]);
}
```

# Structs
## What is a struct?
- A struct is a way of grouping different pieces of related data together into one custom type
- Think of a struct as a custom container that holds multiple values of possibly different types

## Example of a struct
- Image if you want to keep track of a contact in your phone
- Each contact has:
> 1. A **name** (string of characters - chars)
> 2. A **phone number** (another string)

You could store those in two seperate arrays:
```c
char names[100][50];
char phones[100][20];
```
but it will get messy quickly
