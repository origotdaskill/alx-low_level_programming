#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string.
 * @accept: The string containing the bytes to search for.
 *
 * Return: A pointer to the first occurrence of a byte in s that matches
 *         any byte in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{	
			
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
