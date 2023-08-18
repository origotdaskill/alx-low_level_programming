#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
int main (void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	
	return (0);
}
