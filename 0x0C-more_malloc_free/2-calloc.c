#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate and initialize memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 * Return: On success, a pointer to the allocated and initialized memory. On
 *failure, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size) 
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return NULL; 
	}

	ptr = malloc(nmemb * size); 

	if (ptr == NULL)
	{
		return NULL;
	}
	for (i = 0; i < nmemb * size; i++) 
	{
		*((char *)ptr + i) = 0;
	}

	return ptr;
}
