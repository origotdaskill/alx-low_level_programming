#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: This function initializes the members of a struct dog with the
 * provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
