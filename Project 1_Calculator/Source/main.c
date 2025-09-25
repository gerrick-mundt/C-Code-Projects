#include <stdio.h>
#include "calculator.h"

int main()
{
    // Define inputs
    int a,b;
    char op;
    
    // Ask for user to enter two integers
    printf("Enter the first integer: \n");
    scanf("%i", &a);
    printf("Enter the second integer: \n");
    scanf("%i", &b);

    // Ask the user to enter an operator
    printf("Enter the mathematical operator: \n");
    // needs a space between between " and %c to ignore
    // all white space in the input buffer: " %c" instead of "%c"
    scanf(" %c", &op); 

    // Call calculator function
    int value = calculator(a,b,op);
    
    // Print the calculated value
    printf("The calculated value is: %i", value);

    return 0;
}
