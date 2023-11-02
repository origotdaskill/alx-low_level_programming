#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory and check for success
 * @b: The number of bytes to allocate
 *
 * Return: On success, a pointer to the allocated memory. On failure, it
 * terminates the program with an exit status of 98.
 **/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
   	
	if (ptr == NULL)
       	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(98);
	}
	return ptr;
}
