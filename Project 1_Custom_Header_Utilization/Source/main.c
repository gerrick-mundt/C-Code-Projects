#include <stdio.h>
#include "Pythagorean_Theorem.h"

// Main function that takes in the users to
int main()
{
    // Define integers that you are going to be using
    int a, b;

    // Request integer value of a
    printf("Enter a value for a: ");

    // Read the users input at the memory address of a (&a)
    scanf("%d", &a);

    // Request integers value of b
    printf("Enter a value for b: ");

    // Read the users input at the memory address of b (&b)
    scanf("%d", &b);

    // Declare the values that were entered
    printf("The values you entered a = %d, b = %d\n", a,b);

    // Call int Pythagorean_Theorem function
    int c_squared = Pythagorean_Theorem (a,b);

    // Print c_squared result
    printf("c squared equals: %d\n", c_squared);

    // Value that is passed to the OS compilation is successful
    return 0;
}
