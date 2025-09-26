#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float temp_converter(float input_temp, char temp_type)
{
    // If the input temperature value is in Celsius (C),
    // convert it to Fahrenheit (F)
    switch(temp_type)
    {
        // Celsius to Fahrenheit
        case 'c':
        case 'C':
            return 9.0/5.0 * input_temp + 32;

        // Ferinheit to Celsius lower case
        case 'f':
        case 'F':
            return 5.0/9.0 * (input_temp - 32);

        // Case where the type entered was incorrect
        default:
        printf("The temperature type you entered was invalid.\n");

        // Return Not A Number (NAN)
        return NAN;
    }
}