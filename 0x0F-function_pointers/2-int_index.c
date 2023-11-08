#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A function pointer that compares values and returns an integer.
 *
 * This function searches for an integer in the array using the specified
 * comparison function. It returns the index of the first element for which
 * the cmp function does not return 0. If no element matches, it returns -1.
 * If size is less than or equal to 0, it also returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL && size > 0)
    {
        int i;

	for (i = 0; i < size; i++)
        {
            if (cmp(array[i]) != 0)
            {
                return i;
            }
        }
    }
    return -1;
}

