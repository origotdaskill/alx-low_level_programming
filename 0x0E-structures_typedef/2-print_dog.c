#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the information of a struct dog, including
 * its name, age, and owner. If any element of the struct is NULL, it prints (nil)
 * for that element. If the struct pointer is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
    	}
}
