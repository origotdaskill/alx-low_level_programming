#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet followed by a newline using only
 *              the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++; }
	putchar('\n');

	return (0);
}
