#ifndef DOG_H
#define DOG_H
/* this is for the gog struct */
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
