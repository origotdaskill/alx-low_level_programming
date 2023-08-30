#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function recursively prints each character of the
 * string until the null terminator is encountered, then adds a new line.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
