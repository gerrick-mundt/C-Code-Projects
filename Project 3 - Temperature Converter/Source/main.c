#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "temp_converter.h"

int main()
{
    // Declare variables
    float input_temp, converted_temp;
    char temp_type;
    
    // Request user temperature value input
    printf("Enter in a temperature that you want converted: \n");

    // Save user input to memory
    scanf("%f", &input_temp);

    // Request user temperature type input
    printf("Enter the temperature type the value is,\n");
    printf("C for celsius, F for Fahrenheit: \n");

    // Save user temperature type input to memory
    scanf(" %c", &temp_type); 
    
    // Call temperature conversion function
    converted_temp = temp_converter(input_temp, temp_type);

    // print converted temperature
    // If the input temp_type was in celsius, print this statement:
    if(temp_type == 'c' || temp_type == 'C')
    {
        printf("Your converted temperature is: %.2f degrees °F", converted_temp);
    }
    // If the input temp_type was in fahrenheit, print this statement:
    else if(temp_type == 'f' || temp_type == 'F')
    {
        printf("Your converted temperature is: %f °C", converted_temp);
    }
    // If neither of these are true
    else
    {
          printf("You will need to enter a temperature again.");
    }
    return 0;
}