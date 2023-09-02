#include "main.h"

/**
 * _strncpy - Copies up to 'n' characters from the source string to the destination string.
 * @dest: The destination string where characters will be copied to.
 * @src: The source string to copy characters from.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting copied string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
        	dest[i] = '\0';
	}
	return (dest);
}
