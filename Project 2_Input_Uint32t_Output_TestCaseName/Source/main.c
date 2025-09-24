// stdio.h is a header file in C that provides a set of functions for input/output operations
#include <stdio.h>
// Custom header file with definitions for called function and structs
#include "TestID_Lookup.h"

int main()
{
    //Declare input value
    uint32_t test_input_value;

    // Ask user to enter in a uint32_t value
    printf("Please enter in a uint32_t test case value: ");

    // Take the users input
    scanf("%u", &test_input_value);

    // call the getter function for the test name value
    const char* Test_Name = Get_Test_Name(test_input_value);

    // Logic behind return value
    // If Test_Name returns a non-NULL value
    if(Test_Name != NULL)
    {
        printf("The test name associated with your input is: %s", Test_Name);
    }
    else
    {
        printf("The test input value that was entered does not correspond to any test cases");
    }
return 0;
}

