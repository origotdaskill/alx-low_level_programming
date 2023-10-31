#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - Concatenates all the arguments of the program.
  * @ac: The argument count.
  * @av: The array of argument strings.
  *
  * Return: Pointer to the concatenated string, or NULL on failure.
  */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, total_length = 0;
        int current_position = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}
	concatenated = (char *)malloc(total_length + 1);
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[current_position++] = av[i][j];
		concatenated[current_position++] = '\n';
	}
	concatenated[current_position] = '\0'; 
		  
	return (concatenated);

}
