#include <stdio.h>
#include <stdint.h>
#include "TestID_Lookup.h"

// 1) Define the static Test_Table as an array of TestEntry types
static TestEntry Test_Table[] =
{
    {0x85A32F19, "Test Case 1"},
    {0x1F4C7B23, "Test Case 2"},
    {0x94E21D5A, "Test Case 3"},
    {0x67B82F91, "Test Case 4"},
};

// 2) Define the Getter function
const char* Get_Test_Name(uint32_t input_value)
{
    // Find the number of values in the Test_Table matrix
    int table_size = sizeof(Test_Table)/sizeof(Test_Table[0]);

    // If the input is valid, go through the Test_Table matrix values
    for(int i = 0; i < table_size; i++)
    {
        // If a uint32_t 'value' aligns with the user input
        // return the associated string value
        if(Test_Table[i].value == input_value)   
        {
            return Test_Table[i].name;
        }
    }
    // If there is no matching test case, return an NULL
    return NULL;
}


