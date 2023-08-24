#include "main.h"

/**
 * _strncat - Concatenates two strings with a maximum limit of n bytes from src.
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string that will be appended to the destination.
 * @n: The maximum number of bytes from src to be appended.
 *
 * Return: A pointer to the resulting concatenated string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{	
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{	    
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
