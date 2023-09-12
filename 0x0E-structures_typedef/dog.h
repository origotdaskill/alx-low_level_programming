/**********************************************************************
 *                             Dog Struct                              *
 *--------------------------------------------------------------------*
 * Description:                                                       *
 *   This C code defines a simple structure called "dog," which        *
 *   represents information about a dog, including its name, age, and  *
 *   owner. It also provides function prototypes for initializing and  *
 *   printing the information stored in a "dog" structure.             *
 *                                                                    *
 * Structure Fields:                                                  *
 *   - name: Name of the dog (a character pointer).                    *
 *   - age: Age of the dog (a floating-point number).                  *
 *   - owner: Owner of the dog (a character pointer).                  *
 **********************************************************************/
#ifndef DOG_H
#define DOG_H

/*Define the "dog" structure*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;


#endif /* DOG_H */
