#include <stdio.h>

int calculator(int a, int b, char op)
{
    // Input operator and figure out which calculation to make
    switch(op)
    {
        // Multiplication Case
        case '*':
            return a*b;

        // Division Case
        case '/':
            // If b does not equal 0, return a value
            if(b != 0)
            {
                return a/b;
            }
            // If be does not equal 0, return an error
            else
            {
                return 0;
            }

        // Addition case
        case '+':
            return a+b;

        // Subtraction case
        case '-':
            return a-b;

        // Unsupported case
        default:
        printf("Operator invalid \n");
        return 0;
    }
}