#include <stdio.h>
#include <ctype.h>

/**
 * @brief Function to print a name using a given function.
 *
 * This function takes a name as input and uses a provided function pointer
 * to print the name in a specific format. If the function pointer is NULL,
 * it will print an error message.
 *
 * @param name The name to be printed.
 * @param f A function pointer that specifies the print format.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	        f(name);
	}
	else 
	{
		printf("Error: Function pointer is NULL.\n");
	}
}

/**
 * @brief Function to print the name in uppercase.
 *
 * This function takes a name and prints it in uppercase letters.
 *
 * @param name The name to be printed in uppercase.
 */
void print_uppercase(char *name)
{
	char *ptr = name;
	
	while (*ptr)
	{
		putchar(toupper(*ptr));
		ptr++;
	}
	putchar('\n');
}

/**
 * @brief Function to print the name in lowercase.
 *
 * This function takes a name and prints it in lowercase letters.
 *
 * @param name The name to be printed in lowercase.
 */
void print_lowercase(char *name) 
{
	char *ptr = name;
		
	while (*ptr)
	{
		putchar(tolower(*ptr));
		ptr++;
	}
	putchar('\n');
}
