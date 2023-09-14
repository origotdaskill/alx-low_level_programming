#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to an integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element or -1 if not found or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int)) {
    int i;

    if (array == NULL || cmp == NULL || size <= 0) {
        return -1; /* Return -1 for invalid inputs or size <= 0 */
    }

    for (i = 0; i < size; i++) {
        if (cmp(array[i]) != 0) {
            return i; /* Return the index of the first matching element */
        }
    }

    return -1; /* Return -1 if no matching element is found */
}

