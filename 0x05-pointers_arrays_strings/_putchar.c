#include <unistd.h>

/**
 * _putchar - Prints a string to the standard output (stdout)
 * @str: The string to be printed
 * Return: On success, the number of characters printed is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (write(1, &str[len], 1) == -1)
		{
			return (-1);
		}
		len++;
	}

	return (len);
}
