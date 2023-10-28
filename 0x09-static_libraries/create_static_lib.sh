#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -type f -name "*.c")

# Compile each .c file to an object file
for c_file in $c_files; do
    gcc -c "$c_file"
done

# Create the static library by archiving the object files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the object files
rm -f *.o

echo "Static library liball.a created."

