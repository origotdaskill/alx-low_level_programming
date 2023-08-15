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
	for (int i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (int i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
