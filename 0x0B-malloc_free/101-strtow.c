#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * count_words - Counts the number of words in a string.
  * @str: The input string.
  *
  * Return: The number of words in the string.
  */
int count_words(char *str)
{
	int count = 0;
	char *token, *copy;

	if (str == NULL)
		return (0);

	copy = strdup(str);
	if (copy == NULL)
		return (0);
	token = strtok(copy, " ");
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}
	free(copy);
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int j, i, count = count_words(str);
	char *token, *copy;
		  
	if (str == NULL || count == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	copy = strdup(str);
	if (copy == NULL)
	{
		free(words);
		return (NULL);
	}
	token = strtok(copy, " ");
	for (i = 0; i < count; i++)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			free(copy);
			return (NULL);
		}
		token = strtok(NULL, " ");
	}
	words[count] = NULL;
	free(copy);
	return (words);
}
