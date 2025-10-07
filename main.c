#include <stdio.h>
#include <math.h>

int main()
{
    // Define Buffer
    int buffer[12];

    // Define counters
    int i, j;

    // Define user input
    int input;

    // Ask for and save user input to memory
    printf("Input an integer that you want a multiplication table for: ");
    scanf("%d", &input);

    // Define logic loop
    for(i = 0; i < sizeof(buffer)/sizeof(buffer[0]); i++)
    {
        // Multiply user input and store in buffer
        buffer[i] = input * (i+1);
    }

    // Print the multiplication table
    for(j = 0; j < (sizeof(buffer)/sizeof(buffer[0])); j++)
    {
        // Print each value out
        printf("Multiplication table value %d = %d\n", j+1, buffer[j]);
    }

    return 0;
}