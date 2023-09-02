#!/bin/bash

# Compile all .c files to .o object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rc liball.a *.o

# Index the library for efficient linking
ranlib liball.a

# Clean up by removing the object files
rm -f *.o

