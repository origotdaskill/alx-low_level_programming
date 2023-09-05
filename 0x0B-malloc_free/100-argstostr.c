#include <stdlib.h>

/**
 * argstostr - concatenates all arguments into a single string
 * @ac: the number of arguments
 * @av: an array of argument strings
 *
 * Return: If ac is 0, av is NULL, or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
    char *concatenated;
    int i, j, len, total_len = 0;
    int newline_count = ac - 1; // Number of newlines needed

    if (ac == 0 || av == NULL)
        return (NULL);

    // Calculate the total length of the concatenated string
    for (i = 0; i < ac; i++)
    {
        if (av[i] != NULL)
        {
            len = 0;
            while (av[i][len] != '\0')
                len++;
            total_len += len;
        }
    }

    // Add space for newlines and null-terminator
    total_len += newline_count + 1;

    // Allocate memory for the concatenated string
    concatenated = (char *)malloc(total_len * sizeof(char));

    if (concatenated == NULL)
        return (NULL);

    // Copy each argument and add a newline (except for the last argument)
    j = 0;
    for (i = 0; i < ac; i++)
    {
        if (av[i] != NULL)
        {
            len = 0;
            while (av[i][len] != '\0')
            {
                concatenated[j] = av[i][len];
                len++;
                j++;
            }
        }
        if (i < ac - 1) // Add a newline except for the last argument
        {
            concatenated[j] = '\n';
            j++;
        }
    }

    // Null-terminate the concatenated string
    concatenated[j] = '\0';

    return (concatenated);
}
