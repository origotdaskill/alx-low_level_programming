#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int g;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (g = 0; g < 6; g++)
	{
		putchar('a' + g);
	}
	putchar('\n');
	return (0);
}
