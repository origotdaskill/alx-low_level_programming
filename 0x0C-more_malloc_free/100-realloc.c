#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocate memory for a pointer with new size
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size (in bytes) of the previously allocated memory
 * @new_size: New size (in bytes) for the reallocated memory
 *
 * Return: On success, a pointer to the newly reallocated memory. On failure or if
 * no reallocation is needed, it returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size) {
		return ptr;
	}
	if (new_size == 0) {
		free(ptr);
		return NULL;
	}
	if (ptr == NULL) {
		return malloc(new_size);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL) 
	{
		return NULL;
	}

	memcpy(new_ptr, ptr, (new_size < old_size) ? new_size : old_size);
	free(ptr);

	return new_ptr;
}
