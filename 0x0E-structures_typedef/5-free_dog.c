#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog and its associated memory
 * @d: Pointer to a dog_t structure to be freed
 *
 * Description: This function frees the memory allocated for a dog, including
 * the memory allocated for the name and owner strings. It ensures there are
 * no memory leaks when the dog is no longer needed.
 */
void free_dog(dog_t *d) {
    if (d != NULL) {
        free(d->name);
        free(d->owner);
        free(d);
    }
}

