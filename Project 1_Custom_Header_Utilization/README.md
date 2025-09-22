1. Compile Command:

gcc -I "/Users/gerrickmundt/Documents/VS Code/C Code Projects/Project 1_Custom_Header_Utilization/Include" \
"/Users/gerrickmundt/Documents/VS Code/C Code Projects/Project 1_Custom_Header_Utilization/Source/main.c" \
"/Users/gerrickmundt/Documents/VS Code/C Code Projects/Project 1_Custom_Header_Utilization/Source/Pythagorean_Theorem.c" \
-o "/Users/gerrickmundt/Documents/VS Code/C Code Projects/Project 1_Custom_Header_Utilization/PythagoreanProgram"

  Information compile about command:
  1) gcc: GNU C compiler command, tells the system to compile C source files using gcc
  2) -I: Path to include, adds a directory to the list of paths to search for header      files during compilation
  3) -o: specifies the name and location of the output file
  4) The header files are not compiled directly by gcc, instead, they are included by     the source files (.c files)

2. Run the Program:
"/Users/gerrickmundt/Documents/VS Code/C Code Projects/Project 1_Custom_Header_Utilization/PythagoreanProgram"

