#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: If memory allocation fails or if s1 and s2 are NULL, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to concatenated */
	while (s1[i])
	{
		concatenated[i] = s1[i];
		i++;
	}

	/* Copy s2 to concatenated */
	while (s2[j])
	{
		concatenated[i + j] = s2[j];
		j++;
	}

	/* Null-terminate the concatenated string */
	concatenated[i + j] = '\0';

	return (concatenated);
}
