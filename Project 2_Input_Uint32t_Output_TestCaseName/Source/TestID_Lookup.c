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
    // If the input is invalid, return an error //
    // scanf("datatype", memory address of variable)
    if(scanf("%u", &input_value)!= 1)
    {
        printf("The value you entered is not a uint32_t\n");
        return 1;
    }

    // If the input is valid, go through the TestEntry matrix to see
    // if there is a matching test case to the uint32_t that was
    // entered.


    // If there is no matching test case, return an error

}

