#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character used to initialize the array.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */ 
char *create_array(unsigned int size, char c) {
	if (size == 0)
	{
		return NULL;
	}

	char *array;
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL) 
	{	
		return NULL;
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return array;
}
