#include <stdio.h>
#include <stdint.h>
#include "TestID_Lookup.h"

// 1) Define the test entry structure (struct) to associate 32-bit value with test name

    // Unsigned 32 bit value: Unsigned means the integer can only be non-negative
    // Int stands for integer, 32 stands for 32 bit, and t stands for type
    // Used when you need to represent a non-negative integer value that
    // is 32-bits wide or when you need to perform bit operations on a
    // 32-bit integer value.

    // Constant character string pointer:
    // const means this string cannot be modified and is constant
    // char means that the string is composed of characters (bits that represent text)
    // * means that 'name' is pointer to a character string rather than the string itself
    // 'name' is the name of hte variable that holds the pointer (memory address) 
    // to the character string

typedef struct
{
    // Unsigned 32 bit value for test case
    uint32_t value;
    // Constant character string pointer
    const char *name;

  // Name of the newly defined structure type that this typedef defines
} TestEntry;

// 2) Define the static Test_Table as an array of TestEntry types
static TestEntry Test_Table[] =
{
    // {uint32_t value, const char *name}
    {0x85A32F19, "Test Case 1"},
    {0x1F4C7B23, "Test Case 2"},
    {0x94E21D5A, "Test Case 3"},
    {0x67B82F91, "Test Case 4"},
};

// 3) Define the Getter function that returns the character (char) value of the 
// TestEntry type associated with the uint32_t input value the user inputs
   const char* Get_Test_Name(uint32_t input_value)
   {
    // Define the constant size of the test table
    static const number_of_test_entries = sizeof(Test_Table)/sizeof(Test_Table[0]);

    // Run compare algorythm to figure out which test corresponds to this uint32_t input
    // for (initialize; condition; increment)
    // Initialize: Begin counter at 0
    // Condition: If counter (i) is less that the size of the Test_Table then increment
    // Increment: Add one at the end of each loop
       for (int i = 0; i < number_of_test_entries; i++)
    {
        if(input_value == 0)
        {
            printf("Error: Invalid input value\n");
            return NULL;
        }

        // If the test table's TestEntry value is equal to the users input_value
        // return the name char located at that char* memory address
        // stored for that TestEntry 
        if(Test_Table[i].value == input_value)
        {
            return Test_Table[i].name;
        }
    }
    printf("Error: Test not found\n");
    return NULL;
   }