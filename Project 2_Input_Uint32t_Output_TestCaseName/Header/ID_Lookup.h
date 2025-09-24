#ifndef ID_Lookup_H
#define ID_Lookup_H

#include <stdint.h>

typedef struct
{
    uint32_t value;
    const char *name;
} ID_Entry;

const char* Get_Test_Name(uint32_t input_value);

#endif

