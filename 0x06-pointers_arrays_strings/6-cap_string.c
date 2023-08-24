#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 * Return: true if the character is a separator, false otherwise.
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{	
		if (c == separators[i])
		{
			return (true);
		}
	}

	return (false);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
				i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	else
		{
			i++;
		}
	}

	return (str);
}
