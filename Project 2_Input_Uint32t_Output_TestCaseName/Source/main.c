// stdio.h is a header file in C that provides a set of functions for input/output operations
#include <stdio.h>
// Custom header file with definitions for called function and structs
#include "ID_Lookup.h"

int main()
{
    //Declare input value
    uint32_t ID_input_value;

    // Ask user to enter in a uint32_t value
    printf("Please enter in a uint32_t ID value: ");

    // Take the users input
    scanf("%u", &ID_input_value);

    // call the getter function for the ID name value
    const char* ID_Name = Get_ID_Name(ID_input_value);

    // Logic behind return value
    // If ID_Name returns a non-NULL value
    if(ID_Name != NULL)
    {
        printf("The ID name associated with your input is: %s", ID_Name);
    }
    else
    {
        printf("The input value that was entered does not correspond to any ID values");
    }
return 0;
}


