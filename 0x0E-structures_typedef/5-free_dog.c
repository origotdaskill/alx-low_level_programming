#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory associated with a dog structure.
 * @d: Pointer to a dog structure.
 *
 * This function frees the dynamically allocated memory for the name
 * and owner fields of a dog structure, and then it frees the memory
 * for the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
