#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 * @name: The name of the dog (a string)
 * @age: The age of the dog (a floating-point number)
 * @owner: The name of the dog's owner (a string)
 *
 * Description: This structure contains information about a dog, including its name,
 * age, and owner's name.
 */
struct dog 
{
	char *name;
	float age;
	char *owner;
	
};
typedef struct dog dog_t;
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: This function initializes the members of a struct dog with the
 * provided values for name, age, and owner. It takes a pointer to a struct dog,
 * and if the pointer is not NULL, it sets the name, age, and owner of the dog
 * based on the provided parameters.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * print_dog - Prints the information of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the information of a struct dog, including
 * its name, age, and owner. If any element of the struct is NULL, it prints (nil)
 * for that element. If the struct pointer is NULL, it prints nothing.
 */
void print_dog(struct dog *d);

#endif /* DOG_H */
