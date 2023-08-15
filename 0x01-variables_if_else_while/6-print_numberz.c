#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:program that prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
	putchar('0'+i);
	}
	 putchar('\n');

	return (0);
}
