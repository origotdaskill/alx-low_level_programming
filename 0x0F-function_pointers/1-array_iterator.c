#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to be operated on.
 * @size: The size of the array.
 * @action: A function pointer that takes an int as an argument.
 *
 * This function iterates through the elements of the array and applies the
 * specified function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
	size_t i;

        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

