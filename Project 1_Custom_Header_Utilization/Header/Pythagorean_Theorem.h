// PURPOSE: Include guard for Pythagorean_Theorem function
// Note: An include guard is a preprocessor technique in C/C++ used to prevent
// a header file from being included multiple times in a single compilation. 
// This avoids compiler errors like redefinition of functions, variables, or types.

// If PYTHAGOREAN_THEOREM_H has not been defined yet
#ifndef PYTHAGOREAN_THEOREM_H

// Define PYTHAGOREAN_THEOREM_H to prevent multiple 
// inclusions that confuse the compiler
#define PYTHAGOREAN_THEOREM_H

// Function prototype: takes two integer parameters and returns an integer
int Pythagorean_Theorem (int a, int b);

// End of the conditional compilation block (include guard)
#endif
