#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *letters = "aeotlAEOTL";
	char *leet_code = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_code[j];
				break;
			}
		}
	}
	return (str);
}
