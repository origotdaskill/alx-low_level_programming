#include <stdio.h>

/**
 *She locked away a secret, 
 *deep inside herself, 
 *something she once knew to be true...
 * but chose to forget
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
