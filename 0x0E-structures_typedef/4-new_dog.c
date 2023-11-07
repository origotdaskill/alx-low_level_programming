#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores a copy of name and owner
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Return: A pointer to the new dog, or NULL if the function fails
 *
 * Description: This function creates a new dog, allocates memory for it, and
 * makes copies of the provided name and owner to store in the dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog;
    char *name_copy, *owner_copy;

    if (name == NULL || owner == NULL)
        return NULL;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    name_copy = strdup(name);
    if (name_copy == NULL) {
        free(new_dog);
        return NULL;
    }

    owner_copy = strdup(owner);
    if (owner_copy == NULL) {
        free(name_copy);
        free(new_dog);
        return NULL;
    }

    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return new_dog;
}

