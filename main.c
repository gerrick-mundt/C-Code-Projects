#include <stdio.h>
#include "TestID_Lookup"

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

    // Print the name of the test value
    printf("The test name associated with this test input is %s\n", Test_Name);

    return 0;
}