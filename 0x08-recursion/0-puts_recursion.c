#include <stdio.h>

/*
 *_puts_recursion is function 
 * to give a factorial of @char
 * */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
	}
	else 
	{
		putchar('\n');
	}
}
