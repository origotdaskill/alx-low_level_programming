#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:a program that prints the lowercase alphabe.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
