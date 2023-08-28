#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of bytes to match.
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && *s != ' ' && *s != '\t' && *s != '\n' && *s != '\0')
	{
		if (_strchr(accept, *s))
		{
			count++;
		}
		else
		{
			break;
		}
		s++;
	}

	return (count);
}
