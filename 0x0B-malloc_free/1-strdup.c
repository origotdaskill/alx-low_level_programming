#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	/* Return NULL if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	/* Check for memory allocation failure */
	if (duplicate == NULL)
		return (NULL);

	/* Copy the string into the new memory location */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
