#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers within a specified range
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * Return: On success, a pointer to the newly created array. On failure, it
 * returns NULL.
 */
int *array_range(int min, int max) 
{
	int i ,size , *arr;

	if (min > max)
       	{
		return NULL; 
	}

	size = max - min + 1; 

	arr = (int *)malloc(sizeof(int) * size); 

	if (arr == NULL)
	{
		return NULL; 
	}

	for (i = 0; i < size; i++)
       	{
		arr[i] = min + i; 
	}
	return arr;
}
