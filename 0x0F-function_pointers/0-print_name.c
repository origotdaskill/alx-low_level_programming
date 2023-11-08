#include<stdio.h>

/**
 * print_name - Prints a name using a specified function.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as an argument.
 *
 * This function takes a name and a function pointer as arguments.
 * It uses the function pointer to print the name using the specified method.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
