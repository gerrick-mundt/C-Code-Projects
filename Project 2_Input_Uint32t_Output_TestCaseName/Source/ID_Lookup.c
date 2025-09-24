// stdio.h is a header file in C that provides a set of functions for input/output operations
#include <stdio.h>
// stdint.h is a header that provides integer types with specific widths
// with specific widths such as uint32_t, int64_t, and uint8_t
#include <stdint.h> 
// Custom header file with definitions for called function and structs
#include "ID_Lookup.h"

// 1) Define the static ID_Table as an array of ID_Entry types
static ID_Entry ID_Table[] =
{
    {0x85A32F19, "ID_1"},
    {0x1F4C7B23, "ID_2"},
    {0x94E21D5A, "ID_3"},
    {0x67B82F91, "ID_4"},
};

// 2) Define the Getter function
const char* Get_ID_Name(uint32_t input_value)
{
    // Find the number of values in the Test_Table matrix
    int table_size = sizeof(ID_Table)/sizeof(ID_Table[0]);

    // If the input is valid, go through the ID_Table matrix values
    // for(initialize, condition, increment)
    for(int i = 0; i < table_size; i++)
    {
        // If a uint32_t ID 'value' aligns with the user input
        // return the associated string value
        if(ID_Table[i].value == input_value)   
        {
            return ID_Table[i].name;
        }
    }
    // If there is no matching ID, return an NULL
    return NULL;
}





