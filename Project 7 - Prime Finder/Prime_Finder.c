#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// The main function
int main(void)
{
    // Define input buffer
    char buffer1[6];

    // Initialize isInt
    int isInt = 1;

    //--------------------------------------------------------------
    // Request and store user input
    printf("Please enter an integer from 1 to 10000: ");
    fgets(buffer1, sizeof(buffer1), stdin);
    buffer1[strcspn(buffer1, "\n")] = '\0';

    //------------------------------------//
    // Check if each character is a digit
    for(int i = 0; i < strlen(buffer1); i++)
    {
        // Case where the character is not a digit
        if(isdigit(buffer1[i]) == 0)
        {
            // Set isInt = 0 (input is not a int)
            isInt = 0;
            printf("Your input was not an integer \n");
            break;
        }
    }

    //--------------------------------------------------------------
    // Check if the users input is a prime
    if(isInt == 1)
    {
        // Convert the string to an integer
       int integer = atoi(buffer1);
       
       // Define the prime limit
       double primeLimit = sqrt(integer);
       
       // Truncate prime limit to equal floor integer
       int limit = floor(primeLimit);
       
       // Tell the user the limit value
       printf("Your integer prime limit is: %d\n", limit);

       // Create a boolean buffer that is large enough
       // for all integers from 0 to the sqrt(integer)
       bool buffer2[limit + 1];
       
       // Initialize the boolean buffer matrix with all indexes as true
       for(int j = 0; j <= limit; j++)
       {
            buffer2[j] = true;
       }
       
       // Use the Sieve of Eratosthenes
       // Make 0,1 = false since they are not prime numbers
       buffer2[0] = buffer2[1] = false;
       
       // Find all prime integers from 2 to the limit
       for(int g = 2; g <= limit; g++)
       {
            // If at position g in the matrix
            if(buffer2[g])
            {
                // Multiply g by itself. If the multiple is less than the 
                // limit, add another P to that value
                for(int multiple = g*g; multiple <= limit; multiple += g)
                {
                    // This value will be a multiple and thus not prime.
                    // Update its value false in the matrix.
                    buffer2[multiple] = false;
                }
            }
        }

    //--------------------------------------------------------------
        // Figure out if user input is or is not a prime.
        // Initalize prime boolean value to true
        bool isPrime = 1;
        
        // Divide the input integer by each prime that was not eliminated above
        for(int m = 2; m < limit; m++)
        {
            // Non-prime case
            if(buffer2[m] && integer % m == 0)
            {
                // Change isPrime value to 0 reflecting that it is not a prime
                isPrime = 0;
            }
        }

        // Print outcome statement
        if(isPrime == true)
        {
            printf("Your integer is a prime \n");
        }

        else
        {
            printf("Your integer is not a prime \n");
        }
    }

return 0;

}
