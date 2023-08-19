#include "main.h"

/**
 * print_line - Prints a straight line of underscores
 * @n: The number of times to print the underscore character
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
