#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string in memory.
 * @str: The input string to duplicate.
 *
 * Return: Pointer to a new duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
		 return (NULL);
	length = strlen(str);
	duplicate = (char *)malloc(length + 1);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

        return (duplicate);
}

